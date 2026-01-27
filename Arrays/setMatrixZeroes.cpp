// Date: Jan 26 2026
//
// Leetcode #73: Set Matrix Zeroes
// Difficulty: Medium
// Technique:
// Intuition: https://www.youtube.com/watch?v=T41rL0L3Pnw
// Time Complexity: O(m*n + m + n), Space Complexity: O(1)

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  void setZeroes(vector<vector<int>> &matrix) {
    int firstColEl = 1;

    for (int i = 0; i < matrix.size(); i++) {
      for (int j = 0; j < matrix[i].size(); j++) {
        if (matrix[i][j] == 0) {
          matrix[0][j] = 0;
          if (i == 0) {
            firstColEl = 0;
          } else {
            matrix[i][0] = 0;
          }
        }
      }
    }

    for (int i = 1; i < matrix.size(); i++) {
      for (int j = 1; j < matrix[i].size(); j++) {
        if (matrix[0][j] == 0 || matrix[i][0] == 0) {
          matrix[i][j] = 0;
        }
      }
    }

    if (matrix[0][0] == 0) {
      for (int i = 0; i < matrix.size(); i++) {
        matrix[i][0] = 0;
      }
    }

    if (firstColEl == 0) {
      for (int j = 0; j < matrix[0].size(); j++) {
        matrix[0][j] = 0;
      }
    }
  }
};
