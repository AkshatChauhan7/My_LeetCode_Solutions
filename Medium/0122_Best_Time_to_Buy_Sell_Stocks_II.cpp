// Problem: https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/
// Difficulty: Easy
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int result = 0;
        int i = 0;
        while(i < n -1){
            while(i < n - 1 && prices[i] >= prices[i + 1]) i++;
            int localminima = prices[i];

            while(i < n - 1 && prices[i] <= prices[i + 1])i++;
            int localmaxima = prices[i];

            result = result + (localmaxima - localminima);
        }
        return result;
    }
};
