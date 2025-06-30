//  LeetCode: 3. Longest Substring Without Repeating Characters
//  Link: https://leetcode.com/problems/longest-substring-without-repeating-characters/
//  Approach: Sliding Window + Hash Map
//  Time Complexity: O(n)
//  Space Complexity: O(1)

#include <string>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> lastSeenIndex;
        int maxLength = 0;
        int windowStart = 0;

        for (int windowEnd = 0; windowEnd < s.length(); windowEnd++) {
            char currentChar = s[windowEnd];

            if (lastSeenIndex.count(currentChar) && lastSeenIndex[currentChar] >= windowStart) {
                windowStart = lastSeenIndex[currentChar] + 1;
            }

            lastSeenIndex[currentChar] = windowEnd;
            maxLength = max(maxLength, windowEnd - windowStart + 1);
        }

        return maxLength;
    }
};
