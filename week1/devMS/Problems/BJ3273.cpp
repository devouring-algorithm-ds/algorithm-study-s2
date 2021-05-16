/*
* �μ��� ��:https://www.acmicpc.net/problem/3273
* O(n): sort�κ� �����ϰ� �����ذ��� ���� ������ 2 pointer �˰��� ��ü�� ������ ������ŭ�� �����ϱ⶧����
*/
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int length;
	cin >> length;

	int* input = new int[length];
	for (int i = 0; i < length; i++)
	{
		cin >> input[i];
	}

	int goal;
	cin >> goal;

	//Initialize
	int cnt = 0;
	int left = 0;//�迭�� ó������ �ʱ�ȭ
	int right = length-1;//�迭�� ������ �ʱ�ȭ

	sort(input, input + length);

	while (left < right && left != right)
	{
		int temp = input[left] + input[right];
		if (temp == goal)
		{
			cnt++;
			left++;
			right--;
		}
		else if (temp < goal)
		{
			left++;
		}
		else
		{
			right--;
		}

	}
	cout << cnt;

	return 0;
}
