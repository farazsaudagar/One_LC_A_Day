# Date: Jan 30 2026
# Leetcode No. 118: Pascal's Triangle
# Difficulty: Easy
# Intuition:
# Technique:
# Time Complexity: O(n^2)
# Space Complextiy: O(n^2)


class Solution:
    def generate(self, numRows: int) -> list[list[int]]:
        pascal = []

        for i in range(numRows):
            row = [0] * (i + 1)
            for j in range(i + 1):
                if j == i or j == 0:
                    row[j] = 1
                else:
                    row[j] = pascal[i - 1][j] + pascal[i - 1][j - 1]
            pascal.append(row)

        return pascal
