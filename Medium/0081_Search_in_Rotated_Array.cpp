// Problem: https://leetcode.com/problems/search-in-rotated-sorted-array-ii/
// Difficulty: Medium
// Time Complexity: O(log n) on average, O(n) in worst case
// Space Complexity: O(1)

#include <vector>
using namespace std;

class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n = nums.size();
        int start = 0;
        int end = n - 1;
        while(start <= end){
            int mid = start + (end - start)/2;
            if(nums[mid] == target){
                return true;
            }
            if(nums[start] == nums[mid] && nums[mid] == nums[end]){
                start++;
                end--;
                continue;
            }
            if(nums[start] <= nums[mid]){
                if(nums[start] <= target && target < nums[mid]){
                    end = mid - 1;
                }
                else{
                    start = mid + 1;
                }
            }
            else{
                if(nums[mid] < target && target <= nums[end]){
                    start = mid + 1;
                } 
                else{
                    end = mid - 1;
                }
            }
        }
        return false;
    }
};
