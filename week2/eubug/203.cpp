/**
 * Runtime: 20 ms, faster than 77.95% of C++ online submissions 
 * Memory Usage: 15.2 MB, less than 11.11% of C++ online submissions 
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
    ListNode* removeElements(ListNode* head, int val) {
      if(!head) return head;

      ListNode *temp = head->next;
      ListNode *prev = head;

      while(temp != nullptr) {
        if(temp->val == val) {
          prev->next = temp->next;
          delete temp;
          temp = prev->next;
        } else {
          prev = temp;
          temp = temp->next;
        }
      }

      if(head->val == val) {
        temp = head;
        head = head->next;
        delete temp;

      }
      return head;
    }
};
