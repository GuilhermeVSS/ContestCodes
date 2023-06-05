/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function (nums, target) {
    const mapIndex = {}
    for (let i = 0; i < nums.length; i++) {
        const mnumber = nums[i];
        if (mapIndex[target - mnumber] != undefined) {
            return [mapIndex[target - mnumber], i]
        }
        else mapIndex[mnumber] = i;
    }
};

//https://leetcode.com/problems/two-sum/