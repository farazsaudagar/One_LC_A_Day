// Date: January 24, 2026
//
// Leetcode #1299: Replace Elements with Greatest Element on Right Side
// Difficulty: Easy
// Technique: Two pointer
// Intuition: Myself
// Time Complexity: O(n), Space Complexity: O(1)

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  vector<int> replaceElements(vector<int> &nums) {
    int n = nums.size();
    int i = nums.size() - 2;
    int leader = nums[n - 1];
    nums[n - 1] = -1;

    if (n == 1) {
      return nums;
    }

    while (i >= 0) {
      if (nums[i] >= leader) {
        swap(leader, nums[i]);
      } else {
        nums[i] = leader;
      }
      i--;
    }
    return nums;
  }
};
