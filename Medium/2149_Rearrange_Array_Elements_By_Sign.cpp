// Problem: https://leetcode.com/problems/rearrange-array-elements-by-sign/
// Difficulty: Medium
// Time Complexity: O(n)
// Space Complexity: O(n)

#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n , 0);
        int positiveindex = 0; 
        int negativeindex = 1;

        for (int i = 0; i < n; i++){
            if (nums[i] > 0){
                ans[positiveindex] = nums[i];
                positiveindex += 2;
            } else {
                ans[negativeindex] = nums[i];
                negativeindex += 2;
            }
        }
        return ans;
    }
};
