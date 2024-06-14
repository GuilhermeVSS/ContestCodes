var moveZeroes = function(nums) {
    let index = 0;

   for (let i = 0; i < nums.length; i++) {
       const value = nums[i];
       nums[i] = 0;

       if (value !== 0) {
           nums[index++] = value;
       }
   }
   return nums;
};
