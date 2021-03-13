// https://leetcode.com/problems/merge-sorted-array/
const merge = (nums1, m, nums2, n) => {
  // Calculate position to eliminate zeros.
  const toStop = nums1.length + nums2.length - (m + n);
  // Eliminate tail zeros.
  for (let i = 0; i < toStop; i++) {
    nums1.pop();
  }

  // Append array nums2 to nums1
  nums1.push(...nums2);
  // Sort numbers
  nums1.sort((a, b) => a - b);
};
