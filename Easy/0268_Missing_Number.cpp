// Problem: https://leetcode.com/problems/missing-number/
// Difficulty: Easy
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <vector>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = (n * (n + 1)) / 2;
        int s2 = 0;
        for (int i = 0; i < n; i++) {
            s2 += nums[i];
        }
        int MissingNum = sum - s2;
        return MissingNum;
    }
};
