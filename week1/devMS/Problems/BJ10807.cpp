/*
* Count Problem: O(n)
* https://www.acmicpc.net/problem/10807
*/
#include <iostream>
using namespace std;
int main()
{
	int size;
	cin >> size;
	
	int* input = new int[size];
	for (int i = 0; i < size; i++)
	{
		cin >> input[i];
	}

	int target;
	cin >> target;

	int cnt = 0;

	for (int i = 0; i < size; i++)
	{
		if (input[i] == target)
			cnt++;
	}
	cout << cnt;

	delete[] input;

	return 0;
}