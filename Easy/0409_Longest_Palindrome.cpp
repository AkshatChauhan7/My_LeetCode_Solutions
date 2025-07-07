// Problem: https://leetcode.com/problems/longest-palindrome/
// Difficulty: Easy
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    int longestPalindrome(string s) {
        vector<int> lower(26, 0);
        vector<int> upper(26, 0);

        // Count frequency of each character
        for (int i = 0; i < s.length(); i++) {
            if (s[i] >= 'a') {
                lower[s[i] - 'a']++;
            } else {
                upper[s[i] - 'A']++;
            }
        }

        int count = 0;
        bool odd = 0;

        // Build longest palindrome
        for (int i = 0; i < 26; i++) {
            if (lower[i] % 2 == 0) {
                count += lower[i];
            } else {
                count += lower[i] - 1;
                odd = 1;
            }
            if (upper[i] % 2 == 0) {
                count += upper[i];
            } else {
                count += upper[i] - 1;
                odd = 1;
            }
        }

        return count + odd;
    }
};
