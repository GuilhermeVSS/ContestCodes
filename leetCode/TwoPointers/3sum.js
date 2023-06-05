/**
 * @param {number[]} nums
 * @return {number[][]}
 */
var threeSum = function(nums) {
    nums.sort((a,b)=>{
        return a-b;
    });
    const mapAns = {}
    for(let i = 0; i < nums.length-2; i++){
        let complemento = 0 - nums[i];
        let mapSum = {}
        for(let j = i+1; j < nums.length; j++){
            if(mapSum[complemento - nums[j]]){
                mapAns[`${nums[i]}${nums[mapSum[complemento - nums[j]]]}${nums[j]}`] = [nums[i], nums[mapSum[complemento-nums[j]]], nums[j]];
            }
            mapSum[nums[j]] = j;
        }
    }
    return Object.values(mapAns);
};

//https://leetcode.com/problems/3sum/