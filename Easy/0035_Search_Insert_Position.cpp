// Problem: https://leetcode.com/problems/search-insert-position/
// Difficulty: Easy
// Time Complexity: O(log n)
// Space Complexity: O(1)

#include <vector>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start = 0; 
        int end = nums.size() - 1;

        while(start <= end){
            int mid = (start + end)/2;
            if (nums[mid] == target){
                return mid;
            }
            else if (nums[mid] < target){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
        return start;
    }
};
