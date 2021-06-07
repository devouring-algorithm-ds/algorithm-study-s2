/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
#include <vector>

#define abs(a) a<0 ? -a : a

using namespace std;

class Solution {
public:
    // headA와 headB의 연결 리스트에서 각각의 길이 중 더 긴 길이를 N이라고 할 때,
    // 시간 복잡도 : O(N)
    int getLength(ListNode* head) {
        int length = 0;
        while(head != nullptr) {
            head = head->next;
            length++;
        }
        return length;
    }
    
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA == nullptr && headB == nullptr) return nullptr;
        
        int lenA = getLength(headA);
        int lenB = getLength(headB);
        
        int delta = lenA - lenB;
        
        while(delta != 0) {
            if(delta < 0) { // lenA < lenB
                headB = headB->next;
                delta += 1;
            } else { // lenA > lenb
                headA = headA->next;
                delta -= 1;
            }
        }
        
        while(headA != nullptr) {
            if(headA == headB) return headA;
            headA = headA->next;
            headB = headB->next;
        }
        return nullptr;
    }
};