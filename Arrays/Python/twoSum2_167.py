# Date: Feb 1 2026
# Leetcode No. 167: Two Sum II
# Difficulty: Medium
# Intuition:
# Technique:
# Time Complexity: O(n)
# Space Complextiy: O(n)


class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        l, r = 0, len(numbers) - 1
        indices = []
        while l < r:
            if numbers[l] + numbers[r] > target:
                r -= 1
            elif numbers[l] + numbers[r] < target:
                l += 1
            else:
                indices.append(l + 1)
                indices.append(r + 1)
                return indices
