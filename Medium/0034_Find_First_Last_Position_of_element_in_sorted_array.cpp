// Problem: https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
// Difficulty: Medium
// Time Complexity: O(log n)
// Space Complexity: O(1)

#include <vector>
using namespace std;

class Solution {
public:
    int findFirst(vector<int>& nums, int target){
        int start = 0;
        int end = nums.size() - 1;
        int res = -1;
        while(start <= end){
            int mid = (start + end)/2;
            if(nums[mid] == target){
                res = mid;
                end = mid - 1;
            }
            else if(nums[mid] < target){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
        return res;
    }

    int findLast(vector<int>& nums, int target){
        int start = 0;
        int end = nums.size() - 1;
        int res = -1;
        while(start <= end){
            int mid = (start + end)/2;
            if(nums[mid] == target){
                res = mid;
                start = mid + 1;
            }
            else if(nums[mid] < target){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
        return res;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int first = findFirst(nums, target);
        int last = findLast(nums, target);
        return {first, last};
    }
};
