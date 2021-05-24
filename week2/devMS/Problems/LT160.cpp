//https://leetcode.com/problems/intersection-of-two-linked-lists/
//O(n)
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
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        ListNode* pA, * pB;
        int sizeA, sizeB, diff;

        //Init
        pA = headA;
        pB = headB;
        sizeA = 0;
        sizeB = 0;
        diff = 0;

        //Get size of each list
        while (pA != nullptr)
        {
            sizeA++;
            pA = pA->next;
        }
        while (pB != nullptr)
        {
            sizeB++;
            pB = pB->next;
        }

        //reset the positions
        pA = headA;
        pB = headB;

        if (sizeA >= sizeB)
        {
            //Calculate difference of sizes
            diff = sizeA - sizeB;
            //match the start point of A and B
            for (int i = 0; i < diff; i++)
            {
                pA = pA->next;
            }
        }
        else if (sizeA < sizeB)
        {
            //Calculate difference of sizes
            diff = sizeB - sizeA;
            //match the start point of A and B
            for (int i = 0; i < diff; i++)
            {
                pB = pB->next;
            }
        }

        while (pA != pB)//start from same point and go with same steps.
        {
            pA = pA->next;
            pB = pB->next;
        }
        return pA; //when pA == pB, it is intersect point. And if there is no intersect point it will return same nullptr.

    }
};