// Problem: https://leetcode.com/problems/maximum-product-subarray/
// Difficulty: Medium
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int maxprod = nums[0];
        int minprod = nums[0];
        int currprod = nums[0];

        for (int i = 1; i < n; i++){
            int temp = max({nums[i], nums[i] * currprod, nums[i] * minprod});

            minprod = min({nums[i], nums[i] * currprod, nums[i] * minprod});

            currprod = temp;

            maxprod = max(maxprod , currprod);
        }
        return maxprod;
    }
};
