# Date: Feb 3 2026
# Leetcode No. : (Not a leetcode problem, striver dsa sheet) Largest Subarray with Sum 0
# Difficulty: Medium
# Intuition: https://youtu.be/xmguZ6GbatA?si=ktR6KeSy6EtZ61eI
# Technique:
# Time Complexity: O(n log n)
# Space Complextiy: O(n)

from collections import defaultdict


class Solution:
    def maxLen(self, arr):
        # Your code goes here
        s = 0
        mpp = defaultdict(int)
        maxLen = 0
        for i in range(len(arr)):
            s += arr[i]
            if s in mpp:
                maxLen = max(maxLen, i - mpp[s])
            else:
                mpp[s] = i

        return maxLen
