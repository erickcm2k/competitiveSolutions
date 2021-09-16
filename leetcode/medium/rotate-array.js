/**
 * @param {number[]} nums
 * @param {number} k
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var rotate = function(nums, k) {
  k %= nums.length; // Avoids unnecesary rotations
  if (k === 0) {
    return; // The array shifted k times will be the same as the original.
  }
  k--;
  const finalPos = k; // Index where the last number is placed after rotating.

  const tempArray = [];

  const firstHalfStart = nums.length - 1 - finalPos;
  const firstHalfEnd = nums.length - 1;
  const secondHalfStart = 0;
  const secondHalfEnd = nums.length - 2 - finalPos;

  // Inserting the first half of the rotated array.
  for (let i = firstHalfStart; i <= firstHalfEnd; i++) {
    tempArray.push(nums[i]);
  }

  for (let i = secondHalfStart; i <= secondHalfEnd; i++) {
    tempArray.push(nums[i]);
  }
  nums.length = 0;
  tempArray.forEach((e) => nums.push(e));
};
