// Date: Monday, Jan 19, 2026
// LeetCode #169: Majority Element
// Difficulty: Easy/Medium (Medium if using optimal solution; find below)
// Technique: Moore's Voting Algorithm
// Intuition: https://www.youtube.com/watch?v=nP_ns3uSh80
// Time Complexity: O(n), Space Complexity: O(1)
#include <bits/stdc++.h>
class Solution {
public:
  int majorityElement(std::vector<int> &nums) {
    int el = nums[0];
    int count = 1;

    for (int i = 1; i < nums.size(); i++) {
      if (count == 0) {
        el = nums[i];
        count = 0;
      } else if (nums[i] == el) {
        count++;
      } else {
        count--;
      }
    }
    return el;
  }
};
