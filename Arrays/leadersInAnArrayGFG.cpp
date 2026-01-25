// Date: Jan 24 2026
//
// Leetcode #: Leaders in An Array. Not on Leetcode. Found on Striver's DSA
// sheet and GeeksForGeeks Difficulty: Medium Technique: Two Pointer Intuition:
// Myself Time Complexity: O(n), Space Complexity: O(n)

#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  vector<int> leaders(vector<int> &nums) {
    int j = nums.size() - 1;
    int i = nums.size() - 2;
    vector<int> newArray;
    int leader = nums[j];
    newArray.push_back(leader);
    while (i >= 0 && j >= 0) {
      if (nums[i] >= nums[j]) {
        if (nums[i] >= leader) {
          newArray.push_back(nums[i]);
          leader = nums[i];
        }
      }
      i--;
      j--;
    }
    reverse(newArray.begin(), newArray.end());
    return newArray;
  }
};
