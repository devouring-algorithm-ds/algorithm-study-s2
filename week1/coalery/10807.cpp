#include <iostream>
#include <string>
#include <vector>

using namespace std;

// 시간복잡도 : O(N)

int main(void) {
	int N;
	cin >> N;

	vector<int> nums(N);
	int v;
	for (int i = 0; i < N; i++) {
		cin >> nums[i];
	}

	cin >> v;

	int cnt = 0;
	for (int i = 0; i < N; i++) {
		if (nums[i] == v) {
			cnt++;
		}
	}
	cout << cnt << endl;

	return 0;
}