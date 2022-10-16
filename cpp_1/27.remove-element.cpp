/*
 * @lc app=leetcode id=27 lang=cpp
 *
 * [27] Remove Element
 */
#include <bits/stdc++.h>
using namespace std;

// @lc code=start
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int end = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if(nums[i] != val){
                nums[end] = nums[i];
                end++;
            }
        }
        
        return end;
    }
};
// @lc code=end

