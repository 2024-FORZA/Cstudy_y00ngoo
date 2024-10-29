#include <stdio.h>
#include <limits.h>

int main() {
	int n;
	scanf("%d", &n);

	int min = INT_MAX;
	int best_a = 0, best_b = 0, best_c = 0;

	for (int a = 1; a * a * a <= n; a++) {
		if (n % a != 0)
			continue;
		for (int b = a; a * b * b <= n; b++) {
			if ((n / a) % b != 0)
				continue;
			int c = n / (a * b);
			int surface = 2 * (a * b + b * c + c * a);
			if (surface < min) {
				min = surface;
				best_a = a;
				best_b = b;
				best_c = c;
			}
		}
	}
	printf("%d %d %d\n", best_a, best_b, best_c);
	return 0;
}