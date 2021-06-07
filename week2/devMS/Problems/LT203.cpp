//https://leetcode.com/problems/remove-linked-list-elements/
//O(n)
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
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* searchNode = head;
        ListNode* prevNode = nullptr;
        while (searchNode != nullptr)
        {
            if (searchNode->val == val)
            {
                if (searchNode == head)
                {
                    head = searchNode->next;
                    prevNode = nullptr;
                    searchNode = head;
                    continue;
                }
                else
                {
                    prevNode->next = searchNode->next;
                    searchNode = searchNode->next;
                    continue;
                }

            }
            prevNode = searchNode;
            searchNode = searchNode->next;
        }
        return head;

    }
};

