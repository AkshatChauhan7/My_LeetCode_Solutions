// Problem: https://leetcode.com/problems/two-sum/
// Difficulty: Easy
// Time Complexity: O(n²)
// Space Complexity: O(1)

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i; 
        int j;
        int n = nums.size();
        for (int i = 0; i < n; i++){
            for (int j = i + 1; j < n; j++){
                if (nums[i] + nums[j] == target){
                    return {i , j};
                    break;
                }
            }
        }
        return{};
    }
};
