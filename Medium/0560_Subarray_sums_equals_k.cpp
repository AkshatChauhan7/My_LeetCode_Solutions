// Problem: https://leetcode.com/problems/subarray-sum-equals-k/
// Difficulty: Medium
// Time Complexity: O(n)
// Space Complexity: O(n)

#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int , int> mpp;
        int prefixsum = 0; 
        int count = 0;
        mpp[0] = 1;
        for (int i : nums){
            prefixsum += i;
            count += mpp[prefixsum - k];
            mpp[prefixsum]++;
        }
        return count;
    }
};

