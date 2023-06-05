/**
 * @param {number[]} height
 * @return {number}
 */
var maxArea = function(heights) {

    let ans = 0;

    let i = 0;
    let j = heights.length - 1;

    while(heights[i] < heights[j] && i+1 != j) {
        i++;
    }
    ans = Math.max(ans, Math.min(heights[i], heights[j])*(j-i));

    return ans;
};
//https://leetcode.com/problems/container-with-most-water/