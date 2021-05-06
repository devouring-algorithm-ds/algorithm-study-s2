#include <cstdio>
#include <vector>
#include <algorithm>

#pragma warning(disable: 4996)

using namespace std;

vector<int> vec(9);

int sumExclude(int a, int b) {
	int sum = 0;
	for (int i = 0; i < 9; i++) {
		if (i == a || i == b) continue;
		sum += vec[i];
	}
	return sum;
}

void printExclude(int a, int b) {
	vector<int> newVec;
	for (int i = 0; i < 9; i++) {
		if (i == a || i == b) continue;
		newVec.push_back(vec[i]);
	}
	sort(newVec.begin(), newVec.end());
	for (int i = 0; i < 7; i++) {
		printf("%d\n", newVec[i]);
	}
}

int main(void) {
	for (int i = 0; i < 9; i++) {
		scanf("%d", &vec[i]);
	}

	for (int i = 0; i < 9; i++) {
		for (int j = i + 1; j < 9; j++) {
			if (sumExclude(i, j) == 100) {
				printExclude(i, j);
				return 0;
			}
		}
	}

	return 0;
}