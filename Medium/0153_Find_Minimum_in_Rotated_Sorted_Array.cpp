// 🔗 Problem: https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/
// 📊 Difficulty: Medium
// ⏱ Time Complexity: O(log n)
// 🧠 Space Complexity: O(1)
#include <vector>
#include <algorithm>
#include <limits.h>
using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) {
        int start = 0;
        int end = nums.size() - 1;
        int ans = INT_MAX;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            // Case when subarray is already sorted
            if (nums[start] <= nums[end]) {
                ans = min(ans, nums[start]);
                break;
            }

            // Left part is sorted
            if (nums[start] <= nums[mid]) {
                ans = min(ans, nums[start]);
                start = mid + 1;
            }
            // Right part is sorted
            else {
                ans = min(ans, nums[mid]);
                end = mid - 1;
            }
        }

        return ans;
    }
};
