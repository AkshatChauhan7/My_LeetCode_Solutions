// Problem: https://leetcode.com/problems/split-array-largest-sum/
// Difficulty: Hard
// Time Complexity: O(n * log(sum - max))
// Space Complexity: O(1)

#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool cansplit(vector<int>& nums, int maxallowedsum, int k){
        int subarrays = 1;
        int currentsum = 0;
        for (int num : nums){
            if (currentsum + num > maxallowedsum){
                subarrays++;
                currentsum = num;
            }
            else{
                currentsum += num;
            }
        }
        return subarrays <= k;
    }

    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin() , nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);
        int ans = high;
        while(low <= high){
            int mid = low + (high - low)/2;
            if (cansplit(nums, mid, k)){
                ans = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return ans;
    }
};
