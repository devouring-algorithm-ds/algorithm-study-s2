#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// 테스트 케이스의 개수를 N이라고 하고, 각 문자열의 길이를 M이라고 할 때,
// 시간 복잡도 : O(N * MlogM)
// std::sort 의 시간 복잡도가 O(NlogN) 이므로.

int main(void) {
	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		string origin, after_strfry;
		cin >> origin;
		cin >> after_strfry;

		sort(origin.begin(), origin.end());
		sort(after_strfry.begin(), after_strfry.end());

		if (origin == after_strfry) {
			cout << "Possible" << endl;
		}
		else {
			cout << "Impossible" << endl;
		}
	}

	return 0;
}