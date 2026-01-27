// Date: Jan 25 2026
// Leetcode #128: Longest Consecutive Sequence
// Difficulty: Medium
// Technique:
// Intuition: https://www.youtube.com/watch?v=P6RZZMu_maU
// Time Complexity: , Space Complexity:

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int longestConsecutive(vector<int> &nums) {
    unordered_set<int> newset;
    if (nums.size() == 0) {
      return 0;
    }
    int longest = 1;

    for (int i = 0; i < nums.size(); i++) {
      newset.insert(nums[i]);
    }

    for (auto it : newset) {
      if (newset.find(it - 1) == newset.end()) {
        int cnt = 1;
        int x = it;
        while (newset.find(x + 1) != newset.end()) {
          x += 1;
          cnt += 1;
        }
        longest = max(longest, cnt);
      }
    }
    return longest;
  }
};
