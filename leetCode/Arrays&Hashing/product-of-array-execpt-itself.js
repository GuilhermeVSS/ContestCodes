/**
 * @param {number[]} nums
 * @return {number[]}
 */
var productExceptSelf = function(nums) {
    let countZeros = 0;
    let total = nums.reduce((count, num)=>{
        if(num == 0 ){
            countZeros++;
            return count
        }
        count *= num;
        return count;
    },1)
    return  nums.map(data=>{
        if(data == 0 && countZeros == 1) return total;
        if(countZeros) return 0;
        return total/data;
    });
     
};

//https://leetcode.com/problems/product-of-array-except-self/