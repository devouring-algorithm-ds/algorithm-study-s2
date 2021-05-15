#include <stdio.h>

#pragma warning(disable: 4996)

// 시간복잡도 : O(1)

int main(void) {
	int A, B;
	scanf("%d %d", &A, &B);

	if (A >= 13) {
		printf("%d\n", B);
	}
	else if (A >= 6) {
		printf("%d\n", B / 2);
	}
	else {
		printf("0\n");
	}
	return 0;
}