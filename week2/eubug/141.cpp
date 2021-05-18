/**
 * Runtime: 12 ms, faster than 64.66% of C++
 * Memory Usage: 7.8 MB, less than 94.51% of C++
 */
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
    bool hasCycle(ListNode *head) {
      if(!head || !(head->next)) return false;

      ListNode *turtle = head;
      ListNode *hare = head->next;

      while(turtle != hare) {
        if(turtle == nullptr || hare == nullptr) return false;

        if(turtle) turtle = turtle->next;

        if(hare) hare = hare->next;
        if(hare) hare = hare->next;
      } 

      return true;
    }
};
