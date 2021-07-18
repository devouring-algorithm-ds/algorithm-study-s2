#include <iostream>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);

	int A, P;
	cin >> A >> P;
	P += A * 3;
	cout << P / 2 << endl;

	return 0;
}