# Date: Feb 1 2026
# Leetcode No. 15: Three Sum
# Difficulty: Medium
# Intuition: https://www.youtube.com/watch?v=jzZsG8n2R9A
# Technique:
# Time Complexity: O(n^2)
# Space Complextiy: O(1)


class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        res = []
        nums.sort()

        for i, a in enumerate(nums):
            if i > 0 and a == nums[i - 1]:
                continue
            l, r = i + 1, len(nums) - 1
            while l < r:
                print(a, nums[l], nums[r])
                threeSum = a + nums[l] + nums[r]
                if threeSum > 0:
                    r -= 1
                elif threeSum < 0:
                    l += 1
                else:
                    res.append([a, nums[l], nums[r]])
                    l += 1
                    while nums[l] == nums[l - 1] and l < r:
                        l += 1

        return res
