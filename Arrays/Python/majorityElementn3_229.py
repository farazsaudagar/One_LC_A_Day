# Date: Jan 31 2026
# Leetcode No. 229: Majority Element greater than n/3
# Difficulty: Medium
# Intuition: https://www.youtube.com/watch?v=Eua-UrQ_ANo
# Technique: Boyer-Moore's Algorithm
# Time Complexity: O(n)
# Space Complextiy: O(1)
from collections import defaultdict


class Solution:
    def majorityElement(self, nums: list[int]) -> list[int]:
        count_n = defaultdict(int)

        for n in nums:
            count_n[n] += 1

            if len(count_n) <= 2:
                continue
            new_count = defaultdict(int)
            for n, c in count_n.items():
                if c > 1:
                    new_count[n] = c - 1
            count_n = new_count

        res = []
        for n in count_n:
            if nums.count(n) > len(nums) // 3:
                res.append(n)
        return res
