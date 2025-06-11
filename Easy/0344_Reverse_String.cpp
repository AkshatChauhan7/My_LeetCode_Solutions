// Problem: https://leetcode.com/problems/reverse-string/
// Difficulty: Easy
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    void reverseString(vector<char>& s) {
        int left = 0;
        int right = s.size() - 1;
        while (left < right){
            swap (s[left] , s[right]);
            left++;
            right--;
        }
    }
};
