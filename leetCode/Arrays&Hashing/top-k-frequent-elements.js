/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number[]}
 */
var topKFrequent = function (nums, k) {
    const map = {}
    for (const number of nums) {
        map[number] ? map[number]++ : map[number] = 1;
    }

    const vec = Object.entries(map).sort((a, b) => {
        return b[1] - a[1];
    })
    return vec.slice(0, k).map(data => data[0]);

};
//https://leetcode.com/problems/top-k-frequent-elements/