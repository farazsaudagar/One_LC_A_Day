# Date: Feb 6 2026
# Leetcode No. : Not leetcode, on striver's dsa sheet
# Difficulty: Hard
# Intuition: https://www.youtube.com/watch?v=eZr-6p0B7ME
# Technique: Use hashmap to store the previously seen xors, if total xor ^ k has been seen before, increment count.
# Time Complexity: O(n)
# Space Complextiy: O(n)


class Solution:
    def subarraysWithXorK(self, nums, k):
        xr = 0
        count = 0
        mpp = {0: 1}

        for val in nums:
            xr = xr ^ val
            count += mpp.get(xr ^ k, 0)
            mpp[xr] = mpp.get(xr, 0) + 1

        return count
