/**
 * Runtime: 12 ms, faster than 64.66% of C++
 * Memory Usage: 8.1 MB, less than 13.75% of C++
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

      for(int i=0; i<10000; ++i) {
        if(turtle == hare) return true;

        if(turtle) turtle = turtle->next;
        else break;

        if(hare) hare = hare->next;
        if(hare) hare = hare->next;
        else break;
      } 

      return false;
    }
};
