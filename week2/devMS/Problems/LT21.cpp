//https://leetcode.com/problems/merge-two-sorted-lists/
//O(n) : Because I touch the whole list l1 and l2 at the worst case.
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
#include <algorithm>
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* p1, * p2, * newp;
        ListNode* newhead;

        p1 = l1;
        p2 = l2;
        newp = nullptr;
        newhead = nullptr;

        while (p1 != nullptr && p2 != nullptr)
        {
            if (newhead == nullptr)
            {
                if (p1->val <= p2->val)
                {
                    newhead = p1;
                    newp = newhead;
                    p1 = p1->next;
                }
                else
                {
                    newhead = p2;
                    newp = newhead;
                    p2 = p2->next;
                }
            }
            else
            {
                if (p1->val <= p2->val)
                {
                    newp->next = p1;
                    newp = p1;
                    p1 = p1->next;
                }
                else
                {
                    newp->next = p2;
                    newp = p2;
                    p2 = p2->next;
                }
            }
        }
        if (p1 != nullptr)
        {
            if (newp == nullptr)
            {
                return p1;
            }
            newp->next = p1;
        }
        else if (p2 != nullptr)
        {
            if (newp == nullptr)
            {
                return p2;
            }
            newp->next = p2;
        }
        else//if p1 and p2 are null list
        {
            return nullptr;
        }
        return newhead;
    };
};