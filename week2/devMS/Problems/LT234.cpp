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

        //Get input size
        while (iterNode != nullptr)
        {
            size++;
            iterNode = iterNode->next;
        }

        //init
        int* input = new int[size];
        iterNode = head;

        //put list val to the input array
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