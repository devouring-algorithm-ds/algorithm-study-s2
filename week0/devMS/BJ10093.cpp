//�ִ� O(n):n�� �� ���� ���̿� �ִ� ������ �����Դϴ�.
#include <iostream>
using namespace std;

int main()
{
	unsigned long long num1;
	unsigned long long num2;

	cin >> num1;
	cin >> num2;

	if (num1 - num2 == 1 || num2 - num1 == 1) //�� �� ������ ���̰� 1�ΰ�쿡 ����ó��
	{
		cout << 0;
		return 0;
	}
	if (num1 < num2)
	{
		cout << num2 - num1 - 1 << endl;
		while (num1 != num2 -1)
		{
			cout << ++num1 << " ";
		}
	}
	else if (num2 < num1)
	{
		cout << num1 - num2 - 1 << endl;
		while (num2 != num1 -1)
		{
			cout << ++num2 << " ";
		}
	}
	else//�� �� ������ ���̰� 0�ΰ�쿡 ����ó��
	{
		cout << 0 ;
	}
	

	return 0;

}