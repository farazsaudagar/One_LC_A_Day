// Date: Tuesday, Jan 20, 2026
// Leetcode #53: Maximum Subarray
// Difficult: Medium
// Technique: Kadane's algorithm
// Intuition: https://www.youtube.com/shorts/lrH2sw-FmD4
// Time complexity: O(n), Space complexity: O(1)

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int maxSubarray(vector<int> &nums) {
    int sum = 0;
    int maxSum = INT_MIN;

    for (int i = 0; i < nums.size(); i++) {
      sum += nums[i];

      if (sum > maxSum)
        maxSum = sum;

      if (sum < 0)
        sum = 0;
    }
    return maxSum;
  }
};
