// 26. Remove Duplicates from Sorted Array: https://leetcode.com/problems/remove-duplicates-from-sorted-array/

class Solution {
public:
    // O(n), where n is the array length, time complexity
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 0) return 0;
        
        int ptr1 = 0;
        for (int ptr2 = 1; ptr2 < nums.size(); ptr2++) {
            if (nums[ptr1] == nums[ptr2]) continue;
            else {
                ptr1++;
                nums[ptr1] = nums[ptr2];
            }
        }
        
        return ptr1 + 1;
    }
};

// [0, 1, 2, 3, 4, 2, 2, 3, 3, 4] 
//             p1             p4
