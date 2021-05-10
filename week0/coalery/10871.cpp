#include <cstdio>

#pragma warning(disable: 4996)

// 시간복잡도 : O(N)

int main(void) {
	int N, X;
	scanf("%d %d", &N, &X);
	for (int i = 0; i < N; i++) {
		int tmp;
		scanf("%d", &tmp);
		if (tmp < X)
			printf("%d ", tmp);
	}
	printf("\n");
	return 0;;
}