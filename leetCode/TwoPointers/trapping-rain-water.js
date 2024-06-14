/**
 * @param {number[]} height
 * @return {number}
 */
var trap = function(height) {

    let left = 0;
    let right = height.length -1;
    let maxLeft = height[left];
    let maxRight = height[right];
    let ans = 0;

    while( left <= right){
        let aux;
        if(maxLeft < maxRight){
            aux = Math.min(maxLeft, maxRight) - height[left];
            ans = aux > 0? ans + aux : ans;
            maxLeft = Math.max(maxLeft, height[left]);
            left++;
        } else {
            aux = Math.min(maxLeft, maxRight) - height[right];
            ans = aux > 0? ans + aux : ans;
            maxRight = Math.max(maxRight, height[right]);
            right --;
        }
    }
    return ans;
};

//https://leetcode.com/problems/trapping-rain-water