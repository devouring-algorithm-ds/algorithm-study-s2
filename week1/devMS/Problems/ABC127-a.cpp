/*
* A - Ferris Wheel: O(1)
* https://atcoder.jp/contests/abc127/tasks/abc127_a
*/

#include <iostream>
using namespace std;
int main()
{
	int old;
	int cost;

	cin >> old;
	cin >> cost;

	if (old >= 13)
	{
		cout << cost;
	}
	else if (old > 5)
	{
		cout << cost / 2;
	}
	else
		cout << 0;

	return 0;
}