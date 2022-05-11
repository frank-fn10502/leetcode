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
        map<char, int> roman_map;
        roman_map['I'] = 1;
        roman_map['V'] = 5;
        roman_map['X'] = 10;
        roman_map['L'] = 50;
        roman_map['C'] = 100;
        roman_map['D'] = 500;
        roman_map['M'] = 1000;
        roman_map['I' + 'V'] = 4;
        roman_map['I' + 'X'] = 9;
        roman_map['X' + 'L'] = 40;
        roman_map['X' + 'C'] = 90;
        roman_map['C' + 'D'] = 400;
        roman_map['C' + 'M'] = 900;

        int result = 0, temp = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (i == s.length() - 1)
            {
                result += roman_map[s[i]];
                break;
            }
            if (s[i] == 'I' || s[i] == 'X' || s[i] == 'C')
            {
                temp = roman_map[s[i + 1]] - roman_map[s[i]];
                if(temp > 0){
                    result += temp;
                    i++;
                    continue;
                }
            }
            result += roman_map[s[i]];
        }
        return result;
    }
};
// @lc code=end