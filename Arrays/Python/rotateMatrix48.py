# Date: Jan 27 2026
# Leetcode No. 48: Rotate Matrix by 90 degrees
# Difficulty: Medium
# Intuition: https://www.youtube.com/watch?v=fMSJSS7eO1w
# Technique:
# Time Complexity: O(n^2)
# Space Complexity: O(1)


class Solution:
    def rotate(self, matrix: list[list[int]]) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        """
        left, right = 0, len(matrix) - 1

        while left < right:
            for i in range(right - left):
                top, bottom = left, right

                topLeft = matrix[top][left + i]
                matrix[top][left + i] = matrix[bottom - i][left]
                matrix[bottom - i][left] = matrix[bottom][right - i]
                matrix[bottom][right - i] = matrix[top + i][right]
                matrix[top + i][right] = topLeft
            right -= 1
            left += 1
