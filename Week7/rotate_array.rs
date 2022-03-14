impl Solution {
    pub fn rotate(nums: &mut Vec<i32>, k: i32) {
        // make a clone of the original array
        let nums2 = nums.clone();

        // mod k will make sure k never gets bigger than array size
        let k = k as usize % nums.len();

        // mutate the first slice
        for i in 0..k {
            nums[i as usize] = nums2[nums2.len() - k + i];
        }

        // mutate the second slice
        for i in k..nums.len() {
            nums[i as usize] = nums2[i - k];
        }
    }
}
