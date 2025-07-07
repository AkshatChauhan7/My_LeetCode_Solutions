// Problem: https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/
// Difficulty: Easy
// Time Complexity: O(n)
// Space Complexity: O(n)

#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string removeDuplicates(string s) {
        string result = "";
        int i = 0;
        while(i < s.size()){
            if(!result.empty() && result.back() == s[i]){
                result.pop_back();
            }
            else{
                result += s[i];
            }
            i++;
        }
        return result;
    }
};
