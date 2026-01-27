// Date: Jan 22 2026
//
// Leetcode #2149: Rearrange Elements by Sign
// Difficulty: Medium
// Technique:
// Intuition:
// Time Complexity: O(n), Space Complexity: O(n)

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  vector<int> rearrangeArray(vector<int> &nums) {
    vector<int> newArray(nums.size(), 0);

    int pos = 0, neg = 1;

    for (int i = 0; i < nums.size(); i++) {
      if (nums[i] > 0) {
        newArray[pos] = nums[i];
        pos += 2;
      } else {
        newArray[neg] = nums[i];
        neg += 2;
      }
    }

    return newArray;
  }
};
