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
#include <vector>

class Solution {
public:
    // Time Complexity : O(N)
    bool isPalindrome(ListNode* head) {
        vector<int> vec;
        ListNode* cursor = head;
        for(int i = 0; cursor != nullptr; i++) {
            vec.push_back(cursor->val);
            cursor = cursor->next;
        }
        
        int length = vec.size();
        for(int i = 0; i < length / 2; i++) {
            if(vec[i] != vec[length - i - 1])
                return false;
        }
        return true;
    }
};