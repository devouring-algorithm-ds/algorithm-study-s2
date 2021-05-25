//https://leetcode.com/problems/palindrome-linked-list/
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
    bool isPalindrome(ListNode* head) {

        ListNode* iterNode = head;
        int size = 0;

        //input size 찾기
        while (iterNode != nullptr)
        {
            size++;
            iterNode = iterNode->next;
        }

        //init
        int* input = new int[size];
        iterNode = head;

        //input array에 리스트 val 넣기
        for (int i = 0; i < size; i++)
        {
            input[i] = iterNode->val;
            iterNode = iterNode->next;
        }
        //Palindrome check
        for (int i = 0; i < size; i++)
        {
            if (input[i] != input[size - 1 - i])
                return false;
        }

        return true;

    }
};