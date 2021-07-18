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
    // Time Complexity : O(N)
    int getLength(ListNode* head) {
        int length = 0;
        while(head != nullptr) {
            head = head->next;
            length++;
        }
        return length;
    }
    
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* first = nullptr;
        ListNode* second = nullptr;
        
        k = k - 1; // To 0-indexed
        
        int length = getLength(head);
        
        ListNode *cursor = head;
        for(int i = 0; i < length; i++) {
            if(i == k)
                first = cursor;
            if(i == length - k - 1)
                second = cursor;
            cursor = cursor->next;
        }
        
        int tmp = first->val;
        first->val = second->val;
        second->val = tmp;
        
        return head;
    }
};