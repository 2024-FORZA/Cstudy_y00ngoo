#include <stdio.h>

int main() {
	int R, B;
	scanf("%d %d", &R, &B);

	int total = R + B;

	for (int L = 1; L * L <= total; L++) {
		if (total % L == 0) {
			int W = total / L;

			if (2 * (L + W - 2) == R) {
				printf("%d %d", L > W ? L : W, L > W ? W : L);
				break;
			}
		}
	}
	return 0;
}