#include <cstdio>

#pragma warning(disable: 4996)

int main(void) {
	int N, K;
	scanf("%d %d", &N, &K);

	for (int i = 1; i <= N; i++) {
		char tmp;
		scanf(" %c", &tmp);
		if (i == K) printf("%c", tmp + 32);
		else printf("%c", tmp);
	}
	printf("\n");
	return 0;
}