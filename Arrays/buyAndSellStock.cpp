// Date:
//
// Leetcode #:
// Difficulty:
// Technique:
// Intuition:
// Time Complexity: O(), Space Complexity: O()

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int buySellStock(vector<int> &prices) {
    int maxProfit = 0, minimum = prices[0];

    for (int i = 0; i < prices.size(); i++) {
      int cost = prices[i] - minimum;
      maxProfit = max(cost, maxProfit);
      minimum = min(minimum, prices[i]);
    }

    return maxProfit;
  }
};
