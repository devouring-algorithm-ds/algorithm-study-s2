//LeetCode 20. https://leetcode.com/problems/valid-parentheses/

#include <stack>

class Solution {
    stack<char> inputStack;
    char top;

public:
    bool isValid(string s) {

        //���ʰ�ȣ�� ������ ���ÿ� Ǫ���ϰ� ������ ��ȣ�� ������ ������ ���ؼ� �� ��ȣ�� stack�� top�̶� ���� pair���� Ȯ��  
        for (int i = 0; i < s.length(); i++)
        {
            //When you meet left parentheses, push it to the stack
            if (s[i] == '(' || s[i] == '[' || s[i] == '{') 
            {
                inputStack.push(s[i]);
            }
            //When you meet right parentheses, pop and check the top of the input stack is pair of it or not.
            if (s[i] == ')' || s[i] == ']' || s[i] == '}') 
            {

                if (!inputStack.empty())
                {
                    top = inputStack.top();
                    inputStack.pop();
                    if (!isPair(top, s[i]))
                    {
                        return false;
                    }
                }
                //If inputStack is empty and there are right parentheses, It cannot make pair of left parentheses. So false.
                //���� inputStack�� ����ִ� ���¿��� ������ ��ȣ�� �ִ� ? ������ false��.¦(���ʰ�ȣ)�� �����ϱ�
                else
                {
                    return false;
                }

            }
        }
        //After all, if there is something in the stack, It coudn't find pair. So return false.
        //�׷� ������ �� ������ ���� ���� ���ÿ� ���� �����ִٸ� ¦�� ��ã���Ŵϱ� false�� ��ȯ�Ѵ�.
        if (!inputStack.empty())
        {
            return false;
        }
        return true;

    }

    bool isPair(char leftP, char rightP)
    {
        if (leftP == '{')
        {
            if (rightP == '}')
                return true;
        }
        if (leftP == '(')
        {
            if (rightP == ')')
                return true;
        }
        if (leftP == '[')
        {
            if (rightP == ']')
                return true;
        }
        return false;
    }
};