// Problem: https://leetcode.com/problems/valid-anagram/
// Difficulty: Easy
// Time Complexity: O(n log n) 
// Space Complexity: O(1) 

#include <iostream>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        return s == t;
    }
};