/**
 * @param {number[]} nums
 * @return {boolean}
 */
var containsDuplicate = function (nums) {
    const map = {};
    for (const num of nums) {
        map[num] ? map[num]++ : map[num] = 1;
        if (map[num] == 2) return true;
    }
    return false;
};

//https://leetcode.com/problems/contains-duplicate/