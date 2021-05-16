/*
* ¾ËÆÄºª°³¼ö: O(n)
* https://www.acmicpc.net/problem/10808
*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
	int cnt[26] = { 0, };
	string input;

	cin >> input;

	for (int i = 0; i < input.length(); i++)
	{
		cnt[(int)input[i]-97]++;	
	}
	
	for (int i = 0; i < 26; i++)
	{
		cout << cnt[i] << " ";
	}
	
}