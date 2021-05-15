#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// �׽�Ʈ ���̽��� ������ N�̶�� �ϰ�, �� ���ڿ��� ���̸� M�̶�� �� ��,
// �ð� ���⵵ : O(N * MlogM)
// std::sort �� �ð� ���⵵�� O(NlogN) �̹Ƿ�.

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