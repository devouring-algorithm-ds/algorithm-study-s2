#include <cstdio>

#pragma warning(disable: 4996)

// 시간복잡도 : O(N)

int main(void) {
	int N;
	scanf("%d", &N);

	int Y = 0;
	int M = 0;
	for (int i = 0; i < N; i++) {
		int tmp;
		scanf("%d", &tmp);

		Y += (tmp / 30) * 10 + 10;
		M += (tmp / 60) * 15 + 15;
	}

	if (Y < M) printf("Y %d\n", Y);
	else if (Y > M) printf("M %d\n", M);
	else printf("Y M %d\n", Y);
	return 0;
}