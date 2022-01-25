// 66. Plus One: https://leetcode.com/problems/plus-one/

//Solution in C++
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        digits[digits.size()-1]+=1;
        
        if(digits[digits.size()-1]==10){
            for(int idx=digits.size()-1;idx>0;idx--){
                digits[idx]=0;
                digits[idx-1]+=1;
                
                if(digits[idx-1]!=10){
                    break;
                }
            }
        }
        
        if(digits[0]==10){
            digits[0]=1;
            digits.push_back(0);
        }
        
        return digits;
    }
};

// [1,2,3]== 123 -> 124 => [1,2,4]
// 1. add one to the last element of array

// [1,2,9]=> [1,2,10] != 130
// 2. check if ==10 -->   10 => 0, 2=> 3  ;

// [1,9,9,9]=> [1,9,9,10]=> [1,9,10,0]=> [1,10,0,0], [2,0,0,0]

// [9,9,9]=> [9,9,10] =>[9,10,0] => [10,0,0] =>[1,0,0,0]
// 3. if first element==10, chg first element to 1, push 0
