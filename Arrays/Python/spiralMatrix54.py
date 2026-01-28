# Date: Jan 28 2026
# Leetcode No.54: Spiral Matrix
# Difficulty: Medium
# Intuition:
# Technique:
# Time Complexity: O(n^2)
# Space Complextiy: O(1)


class Solution:
    def spiralOrder(self, matrix: list[list[int]]) -> list[int]:
        left = 0
        right = len(matrix[0]) - 1
        t = 0
        b = len(matrix) - 1

        arr = []

        while left <= right and t <= b:
            for i in range(left, right + 1):
                arr.append(matrix[t][i])
            t += 1
            for i in range(t, b + 1):
                arr.append(matrix[i][right])
            right -= 1
            if t <= b:
                for i in range(right, left - 1, -1):
                    arr.append(matrix[b][i])
            b -= 1
            if left <= right:
                for i in range(b, t - 1, -1):
                    arr.append(matrix[i][left])
            left += 1
        return arr
