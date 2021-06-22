//933. Number of Recent Calls
//https://leetcode.com/problems/number-of-recent-calls/
//Runtime: 136 ms, faster than 64.64% of C++ online submissions for Number of Recent Calls.
//Memory Usage : 57.3 MB, less than 71.45 % of C++ online submissions for Number of Recent Calls.
// 
// 
//Time�ʰ�����:ó������ ������� range������ �������� �ȵ������� ��� queue�� �� ���鼭 ������ �ôµ� �׷��ϱ� �ʹ� �����ɷ���.
//�ذ���: ������ ���������̴ϱ� ť ���� �����߿� lowBound���� ���� �κб����� pop�� �ϸ� �������� �� low bound���� ū�κ��̶� 
//�ű������ pop�� �ϰ� ť�� ����� ��ȯ�ϴ� �Լ��� ���.

#include<queue>

class RecentCounter {
public:
    queue<int> q;
    RecentCounter() {

    }

    int ping(int t) {
        q.push(t);

        //Get Range
        int lowBound = t - 3000;

        while (q.front() < lowBound)
        {
            q.pop();
        }
        return q.size();

    }

};