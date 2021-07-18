//https://atcoder.jp/contests/abc128/tasks/abc128_a
//O(1)
#include <iostream>
using namespace std;
int main()
{
	int numApple, numPiece;
	cin >> numApple >> numPiece;

	numPiece += numApple * 3;
	cout << numPiece / 2;
}