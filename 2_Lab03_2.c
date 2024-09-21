#include <stdio.h>

int main() {
	int T;
	scanf("%d", &T);

	if (T % 10 != 0) {
		printf("-1\n");
		return 0;
	}

	int A = T / 300;
	T %= 300;

	int B = T / 60;
	T %= 60;

	int C = T / 10;

	printf("%d %d %d", A, B, C);

	return 0;
}