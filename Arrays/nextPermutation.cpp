// Date: Jan 23 2026
//
// Leetcode #31: Next Permuation
// Difficulty: Medium
// Technique: Array/TwoPointers
// Intuition: Myself
// Time Complexity: O(n), Space Complexity: O(1)

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  void nextPermuation(vector<int> &nums) {
    int n = nums.size();

    for (int i = n - 2; i >= 0; i--) {
      if (nums[i] < nums[i + 1]) {
        for (int j = n - 1; j > i; j--) {
          if (nums[j] > nums[i]) {
            swap(nums[i], nums[j]);
            reverse(nums.begin() + i + 1, nums.end());
            return;
          }
        }
      }
    }

    reverse(nums.begin(), nums.end());
  }
};
