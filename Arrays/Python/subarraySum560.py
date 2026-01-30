# Date: Jan 29 2026
# Leetcode No. 560: Subarray Sum equals K
# Difficulty: Medium
# Intuition:
# Technique:
# Time Complexity: O(n)
# Space Complextiy: O(n)


class Solution:
    def subarraySum(self, nums: list[int], k: int) -> int:
        count = 0
        sum_n = 0
        mpp = {0: 1}

        for i in range(len(nums)):
            sum_n += nums[i]
            if sum_n - k in mpp:
                count += mpp[sum_n - k]
            if sum_n in mpp:
                mpp[sum_n] += 1
            else:
                mpp[sum_n] = 1
        return count
