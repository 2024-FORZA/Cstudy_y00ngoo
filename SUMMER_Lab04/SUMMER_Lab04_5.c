#include <stdio.h>
#include <math.h>

int main() {
	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		int x;
		scanf("%d", &x);

		int round_base = 10;
		while (x >= round_base) {
			x = ((x + round_base / 2) / round_base) * round_base;
			round_base *= 10;
		}

		printf("%d\n", x);
	}
	return 0;
}