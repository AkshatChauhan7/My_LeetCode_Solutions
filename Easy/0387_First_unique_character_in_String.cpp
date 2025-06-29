/*
LeetCode Problem: 387. First Unique Character in a String
Difficulty: Easy
Link: https://leetcode.com/problems/first-unique-character-in-a-string/

Time Complexity: O(n)
Space Complexity: O(1)
*/
#include <string>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> freq;
        for (char c : s) {
            freq[c]++;
        }
        for (int i = 0; i < s.length(); i++) {
            if (freq[s[i]] == 1)
                return i;
        }
        return -1;
    }
};
