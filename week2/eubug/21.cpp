/*
 * Runtime: 4 ms, faster than 95.39% of C++ online submissions 
 * Memory Usage: 14.9 MB, less than 40.46% of C++ online submissions
*/


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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
      ListNode *res = new ListNode(0);
      ListNode *temp = res;

      while(l1 && l2) {
        if(l1->val <= l2->val) {
          cout << "l1: " << l1->val << endl;
          temp->next = l1; 
          temp = temp->next;
          l1 = l1->next;
        } else {
          cout << "l2: " << l2->val << endl;
          temp->next = l2;
          temp = temp->next;
          l2 = l2->next;
        }
      }

      while(l1) {
        temp->next = l1;
        temp = temp->next;
        l1 = l1->next;
      }

      while(l2) {
        temp->next = l2;
        temp = temp->next;
        l2 = l2->next;
      }

      return res->next;
    }
};
