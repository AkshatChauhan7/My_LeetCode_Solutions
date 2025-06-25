// Problem: https://leetcode.com/problems/single-element-in-a-sorted-array/
// Difficulty: Medium
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <vector>
using namespace std;

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        int xorr = 0;
        for (int i = 0; i < n; i++){
            xorr = xorr ^ nums[i];
        }
        return xorr;
    }
};
