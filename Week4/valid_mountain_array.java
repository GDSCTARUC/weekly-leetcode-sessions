class Solution {
    public boolean validMountainArray(int[] arr) {
        
        //check if not meet condition of mountain array (arr.length >= 3)
        if(arr.length < 3) return false;
        
        int i = 0;
        
        //check whether the array dont have peak (no walking up/down the mountain)
        if(arr[i] > arr[i+1] || arr[arr.length-1] > arr[arr.length-2]) return false;
        
        //walking up
        while(i < arr.length - 1 && arr[i] < arr[i+1]) i++;
        
        //walking down
        while(i < arr.length - 1 && arr[i] > arr[i+1]) i++;
        
        //the condition is true only when the it is strictly decreasing from the peak (i = last index of array)
        return i == arr.length-1;
        
    }
}
