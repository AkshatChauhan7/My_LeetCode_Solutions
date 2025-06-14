// Problem: https://leetcode.com/problems/move-zeroes/
// Difficulty: Easy
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int j = -1;
        for (int i = 0; i < n; i++){
            if (nums[i] == 0){
                j = i;
                break;
            }
        }
        if (j == -1) return;
        for (int i = j + 1; i < n; i++){
            if (nums[i] != 0){
                swap(nums[i] , nums[j]);
                j++;
            }
        }
    }
};