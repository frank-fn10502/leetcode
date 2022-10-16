/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 */
#include <bits/stdc++.h>
using namespace std;

// @lc code=start
class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> stack;
        char t;
        for (auto c : s)
        {
            if (c == '(' || c == '[' || c == '{')
            {
                stack.push(c);
                continue;
            }

            if (stack.empty())
                return false;

            t = stack.top();
            stack.pop();

            if (c == ')' && t != '(')
                return false;
            if (c == ']' && t != '[')
                return false;
            if (c == '}' && t != '{')
                return false;
        }
        return stack.empty();
    }
};
// @lc code=end
