/**
 * @param {number[]} nums
 * @return {number}
 */

var longestConsecutive = function(nums) {
    const myVec = [...new Set(nums.sort((a,b)=>{
        return a-b;
    }))];
    let count = 1;
    let ans = 0;
    for(let i = 0; i < myVec.length; i++){
        if(myVec[i]+1 == myVec[i+1]){
            count++;
        } else {
            count = 1;
        }
        ans = Math.max(ans, count);
    }
    return ans;
};
//https://leetcode.com/problems/longest-consecutive-sequence/