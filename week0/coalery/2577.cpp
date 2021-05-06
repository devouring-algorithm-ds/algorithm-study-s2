#include <cstdio>

#pragma warning(disable: 4996)

int cnt[10];

void solve(int current) {
	if (current == 0) return;
	cnt[current % 10]++;
	solve(current / 10);
}

int main(void) {
	int A, B, C;
	scanf("%d %d %d", &A, &B, &C);
	solve(A * B * C);

	for (int i = 0; i < 10; i++)
		printf("%d\n", cnt[i]);

	return 0;
}