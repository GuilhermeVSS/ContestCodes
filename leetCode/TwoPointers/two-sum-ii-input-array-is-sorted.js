/**
 * @param {number[]} numbers
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(numbers, target) {
    const map = {};
    for(let i = 0; i < numbers.length; i++){
        let number = numbers[i];
        if(map[target-number]) return [map[target-number], i+1];
        map[number] = i+1;
    }
};
//https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/