/*
 * @lc app=leetcode id=13 lang=cpp
 *
 * [13] Roman to Integer
 */
#include <bits/stdc++.h>
using namespace std;

// @lc code=start
class Solution
{
public:
    int romanToInt(string s)
    {
        map<char, int> roman_map = {{'M', 1000}, {'D', 500}, {'C', 100}, {'L', 50}, {'X', 10}, {'V', 5}, {'I', 1}};

        int result = 0;

        result += roman_map[s.back()];
        for (int i = 0; i < s.length() - 1; i++)
        {
            if (roman_map[s[i + 1]] > roman_map[s[i]])
                result -= roman_map[s[i]];
            else
                result += roman_map[s[i]];
        }
        return result;
    }
};
// @lc code=end