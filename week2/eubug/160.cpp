/*
 * Runtime: 52 ms, faster than 26.31% of C++
 * Memory Usage: 17.2 MB, less than 12.43% of C++
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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
      unordered_set<ListNode*> us;
      ListNode *temp = headA;
      while(temp) {
        us.insert(temp);
        temp = temp->next;
      }

      temp = headB;
      while(temp) {
        if(us.find(temp) != us.end()) return temp;
        temp = temp->next;
      }

      return nullptr;

    }
};
