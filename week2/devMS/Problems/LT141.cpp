//https://leetcode.com/problems/linked-list-cycle
//O(n)
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    //Floyd's cycle-finding algorithm
    bool hasCycle(ListNode* head) {
        ListNode* p1, * p2;
        p1 = head;
        p2 = head;
        while (p1 && p1->next && p2->next && p2->next->next)
        {
            p1 = p1->next;
            p2 = p2->next->next;
            if (p1 == p2)
            {
                return true;
            }
        }
        return false;

    }
};