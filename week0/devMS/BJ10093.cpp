//최대 O(n):n은 두 수의 사이에 있는 정수의 개수입니다.
#include <iostream>
using namespace std;

int main()
{
	unsigned long long num1;
	unsigned long long num2;

	cin >> num1;
	cin >> num2;

	if (num1 - num2 == 1 || num2 - num1 == 1) //두 수 사이의 차이가 1인경우에 예외처리
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
	else//두 수 사이의 차이가 0인경우에 예외처리
	{
		cout << 0 ;
	}
	

	return 0;

}