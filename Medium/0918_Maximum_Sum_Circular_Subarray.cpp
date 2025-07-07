// Problem: https://leetcode.com/problems/maximum-sum-circular-subarray/
// Difficulty: Medium
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n = nums.size();
        int currmaxsum = 0;
        int currminsum = 0;
        int totalsum = 0;
        int maxsum = nums[0]; int minsum = nums[0];

        for (int i = 0; i < n; i++){
            currmaxsum = max(currmaxsum + nums[i] , nums[i]);
            maxsum = max(currmaxsum, maxsum);

            currminsum = min(currminsum + nums[i] , nums[i]);
            minsum = min(currminsum, minsum);

            totalsum += nums[i];
        }
        int normalsum = maxsum;
        int circularsum = totalsum - minsum;

        if(minsum == totalsum){
            return normalsum;
        }
        return max(normalsum, circularsum);
    }
};
