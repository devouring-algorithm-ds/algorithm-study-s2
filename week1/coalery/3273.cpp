#include <iostream>
#include <algorithm>

using namespace std;

// 시간복잡도 : O(N)

bool numsExists[1000001];

int main(void) {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int tmp;
		cin >> tmp;
		numsExists[tmp] = true;
	}

	int x;
	cin >> x;

	int cnt = 0;
	for (int i = 1; i <= x; i++) {
		if (numsExists[i] && numsExists[x - i]) {
			cnt++;
		}
	}
	cout << cnt / 2 << endl;

	return 0;
}