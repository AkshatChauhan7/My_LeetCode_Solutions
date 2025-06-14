// Problem: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
// Difficulty: Easy
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minprice = INT_MAX;
        int n = prices.size();
        int maxprofit = 0;
        for (int i = 0; i < n; i++){
            minprice = min(minprice , prices[i]);
            maxprofit = max(maxprofit, prices[i] - minprice);
        }
        return maxprofit;
    }
};
