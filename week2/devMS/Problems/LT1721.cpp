//https://leetcode.com/problems/swapping-nodes-in-a-linked-list/submissions/
//O(n)

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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* iterNode = head;
        int cnt = 0;//원소를 몇번째로 만난건지 1,2,3...

        int swap_val[2] = { 0,0 };//A와 B를 swap해야된다면 [0]:A의 val [1]:B의 val
        ListNode* swap_idx[2] = { nullptr,nullptr };//A와 B를 swap해야된다면 [0]:A node의 ptr [1]:B의 ptr

        int size = getSize(head);

        if (size == 2)
        {
            for (int i = 0; i < 2; i++)//swap_val array에 값저장
            {
                swap_val[i] = iterNode->val;
                iterNode = iterNode->next;
            }

            iterNode = head;
            for (int i = 0; i < 2; i++)//저장한 값을 기반으로 swap
            {
                iterNode->val = swap_val[1 - i];
                iterNode = iterNode->next;
            }
            return head;
        }

        while (iterNode != nullptr)
        {
            cnt++;
            //swap_val, swap_idx array에 값저장
            if (cnt == k)
            {
                swap_val[0] = iterNode->val;
                swap_idx[0] = iterNode;
            }
            if (cnt == size - k + 1)
            {
                swap_val[1] = iterNode->val;
                swap_idx[1] = iterNode;
            }
            iterNode = iterNode->next;
        }
        //저장한 값을 기반으로 swap
        swap_idx[0]->val = swap_val[1];
        swap_idx[1]->val = swap_val[0];

        return head;

    }

    int getSize(ListNode* head) {
        ListNode* iterNode = head;
        int size = 0;
        while (iterNode != nullptr)
        {
            size++;
            iterNode = iterNode->next;
        }
        return size;

    }
};