#include <bits/stdc++.h>
using namespace std;

bool valid_mountain_array(vector<int>& arr) {
  // a valid mountain array must 
  // have at least 3 elements.
  if (arr.size() < 3) return false;

  // a pointer to iterate the array
  int i = 0;

  // walk up (next elem must be greater than current elem)
  while (i < arr.size() - 1 && arr[i + 1] > arr[i]) i++;

  // reach peak (check if peak is valid)
  if (i == 0 || i == arr.size() - 1) return false;

  // walk down (next elem must be smaller than current elem)
  while (i < arr.size() - 1 && arr[i + 1] < arr[i]) i++;

  // if pointer reaches the end, then it is a valid
  // mountain array
  return i == arr.size() - 1;
}

struct testcase {
  vector<int> arr;
  bool res;
};

void test() {
  vector<testcase> testcases{
    (testcase) { vector<int>{2,1}, false },
    (testcase) { vector<int>{3,5,5}, false },
    (testcase) { vector<int>{0,3,2,1}, true },
  };
  for (int i = 0; i < testcases.size(); i++) {
    assert(valid_mountain_array(testcases[i].arr) == testcases[i].res);
    cout << "test " << i + 1 << ": PASSED\n";
  }
}

int main() {
  test();
}
