/**
 * Runtime: 216 ms, faster than 35.63% of C++
 * Memory Usage: 118.3 MB, less than 49.17% of C++ 
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
    bool isPalindrome(ListNode* head) {
      int s[100000]={0};
      int i=0, j=0;
      while(head->next) {
        s[j++] = head->val;
        head = head->next;
      }
      s[j] = head->val;

      while(i < j)
        if(s[i++]!= s[j--])  return 0;

      return 1;     
    }
};
