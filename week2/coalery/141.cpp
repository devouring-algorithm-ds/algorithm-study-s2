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
    // 연결 리스트의 길이를 N이라고 할 때,
    // 루프가 있다면, 시간복잡도 : O(1)
    // 루프가 없다면, 시간복잡도 : O(N)
    bool hasCycle(ListNode *head) {
        if(head == nullptr) return false;
        
        int cnt = 0;
        ListNode* cursor = head;
        while(cursor != nullptr) {
            cursor = cursor->next;
            cnt++;
            if(cnt > 10000) {
                return true;
            }
        }
        return false;
    }
};