//https://leetcode.com/problems/jump-game/


// m = length nums arr, n=max num of steps

// bottom up, tabulation
//TC: O(mn), SC: O(max(m,n))
var canJump = function(nums) {
    let dpTable = Array.from({length: nums.length}, ()=>false);
    dpTable[0] = true; 
    // Array(nums.length).fill(false);
    
    for (let i=0; i<nums.length; i++){
        if(dpTable[i]){
            for(let j=1; j<= nums[i]; j++){
                if(i+j < nums.length)
                    dpTable[i+j] = true;
            }
        }
    }
    
    return dpTable[nums.length-1];
};


//top down, memoization
// tc: O(n*m), sc:(n+m) // TC of DP memoization
var canJump = function(nums) {
    
    const memo = new Map();

    var dfs = function (idx){
        
        if(memo.has(idx))return memo.get(idx);
        if(idx == nums.length-1){
            memo.set(idx,true);
            return true;
        } 
        
        for(let step=1; step<= nums[idx]; step++){
            if(dfs(idx+step)){
                memo.set(idx,true);
                return true;
            }
        }
        memo.set(idx,false);
        return false;
    }
    
    return dfs(0);
};
