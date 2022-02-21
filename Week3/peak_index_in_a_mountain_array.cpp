// https://leetcode.com/problems/peak-index-in-a-mountain-array

//binary search
int peakIndexInMountainArray(vector<int>& arr) {

      int lo = 1 , hi = arr.size()-2;

      while( lo < hi ){ // or  lo != hi

          int mid = (lo + hi)/ 2; // finding midpoint

          //determine interval
          if( arr[mid] < arr[mid+1]){
              //change lo
              lo = mid + 1;
          }else{
              //change hi
              hi = mid;
          }
      }

      //at this point lo == hi
      return lo;
  }

/*
Binary search template: 

int lo = 0 , hi = arr.size()-1;

while( base case ){

    int mid = (lo + hi)/ 2; // finding midpoint
    
    //determine interval
    
    if( checking ){
        change lo
    }else{
        change hi
    }
 }  
 return ans;


*/
