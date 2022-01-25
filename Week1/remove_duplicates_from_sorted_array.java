// 26. Remove Duplicates from Sorted Array: https://leetcode.com/problems/remove-duplicates-from-sorted-array/

class Solution {
    public int removeDuplicates(int[] nums) {
        if (nums.length == 0) return 0;
        
        int ptr1 = 0;
        for (int ptr2 = 1; ptr2 < nums.length; ptr2++) {
            if (nums[ptr1] == nums[ptr2]) continue;
            else {
                ptr1++;
                nums[ptr1] = nums[ptr2];
            }
        }
        
        return ptr1 + 1;
    }
}
