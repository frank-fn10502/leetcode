/*
 * @lc app=leetcode id=14 lang=cpp
 *
 * [14] Longest Common Prefix
 */
#include <bits/stdc++.h>
using namespace std;

// @lc code=start
class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        int i = 0;
        string result = "";
        char currentChar;
        while (true)
        {
            currentChar = strs[0][i];
            for (auto item : strs)
            {
                if (item[i] == '\0' || item[i] != currentChar)
                {
                    return result;
                }
            }
            result += currentChar;
            i++;
        }
    }
};
// @lc code=end
