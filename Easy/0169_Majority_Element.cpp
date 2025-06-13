// Problem: https://leetcode.com/problems/majority-element/
// Difficulty: Easy
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <vector>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int element = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++){
            if (count == 0){
                element = nums[i];
                count = 1;
            }
            else if (nums[i] == element) {
                count += 1;
                } 
            else {
                count -= 1;
            }
        }
        return element;
    }
};