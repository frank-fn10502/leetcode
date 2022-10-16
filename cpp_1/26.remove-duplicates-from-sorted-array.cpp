/*
 * @lc app=leetcode id=26 lang=cpp
 *
 * [26] Remove Duplicates from Sorted Array
 */
#include <bits/stdc++.h>
using namespace std;

// @lc code=start
class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int current_num = nums[0] - 1, current_end_index = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != current_num)
            {
                current_num = nums[i];
                nums[current_end_index] = current_num;
                current_end_index++;
            }
        }
        return current_end_index;
    }
};
// @lc code=end
