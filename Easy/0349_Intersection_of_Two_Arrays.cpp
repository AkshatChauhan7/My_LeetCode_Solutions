/*
LeetCode Problem: 349. Intersection of Two Arrays
Difficulty: Easy
Link: https://leetcode.com/problems/intersection-of-two-arrays/

Time Complexity: O(n + m)
Space Complexity: O(n)
*/

#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        //first make an ordered set of sorted nums1
        //initialize a set of result
        unordered_set<int> s(nums1.begin() , nums1.end());
        unordered_set<int> result;
        for (int i : nums2){      //loop lgado nums2 mei
            if (s.count(i)){      //s.count checks if the number exists in s or not
                result.insert(i);      // inserts the number in that result set
            }
        }
        // now return the result set as array
        return vector<int>(result.begin(), result.end());
    }
};