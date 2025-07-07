// Problem: https://leetcode.com/problems/reverse-words-in-a-string/
// Difficulty: Medium
// Time Complexity: O(n)
// Space Complexity: O(n)

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        int i = 0, n = s.length();
        vector<string> words;

        while (i < n) {
            while (i < n && s[i] == ' ') i++; 
            if (i >= n) break;
            int j = i;
            while (j < n && s[j] != ' ') j++; 
            words.push_back(s.substr(i, j - i)); 
            i = j;            
        }

        reverse(words.begin(), words.end());

        string result = "";
        for (int k = 0; k < words.size(); k++) {
            result += words[k];
            if (k < words.size() - 1)
                result += ' ';
        }
        return result;
    }
};
