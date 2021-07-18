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
    // N이 l1의 길이이고, M이 l2의 길이라고 할 때,
    // 시간복잡도 : O(N + M)

    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1 == nullptr && l2 == nullptr)
            return nullptr;
        
        int direction;
        int a = check(l1, l2, &direction);
        ListNode* result = new ListNode(a);
        
        if(direction == -1) { // left
            solve(l1->next, l2, result);
        } else { // right
            solve(l1, l2->next, result);
        }
        return result;
    }
    
    int check(ListNode* l1, ListNode* l2, int* direction) {
        int val1 = 1000;
        int val2 = 1000;
        
        if(l1 != nullptr)
            val1 = l1->val;
        if(l2 != nullptr)
            val2 = l2->val;
        
        if(val1 < val2) { // left
            *direction = -1;
            return val1;
        } else { // right
            *direction = 1;
            return val2;
        }
    }
    
    void solve(ListNode* l1, ListNode* l2, ListNode* result) {
        if(l1 == nullptr && l2 == nullptr) return;
        
        int direction;
        int a = check(l1, l2, &direction);
        ListNode* newNode = new ListNode(a);
        result->next = newNode;
        
        if(direction == -1) { // left
            solve(l1->next, l2, result->next);
        } else { // right
            solve(l1, l2->next, result->next);
        }
    }
};