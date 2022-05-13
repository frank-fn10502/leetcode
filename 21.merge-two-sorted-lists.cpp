/*
 * @lc app=leetcode id=21 lang=cpp
 *
 * [21] Merge Two Sorted Lists
 */
#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        if (list1 == NULL)
            return list2;

        if (list2 == NULL)
            return list1;

        ListNode *ptr, *cur;
        if (list1->val < list2->val)
        {
            ptr = list1;
            list1 = list1->next;
        }
        else
        {
            ptr = list2;
            list2 = list2->next;
        }
        cur = ptr;

        while (list1 != NULL || list2 != NULL)
        {
            if (list1 == NULL)
            {
                cur->next = list2;
                list2 = list2->next;
            }
            else if (list2 == NULL)
            {
                cur->next = list1;
                list1 = list1->next;
            }
            else
            {
                if (list1->val < list2->val)
                {
                    cur->next = list1;
                    list1 = list1->next;
                }
                else
                {
                    cur->next = list2;
                    list2 = list2->next;
                }
            }
            cur = cur->next;
        }
        return ptr;
    }
};
// @lc code=end
