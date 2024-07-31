#include <stdio.h>

long long comb(int n, int k);

int main() {
	int T;
	scanf("%d", &T);

	while (T--) {
		int N, M;
		scanf("%d %d", &N, &M);

		printf("%lld\n", comb(M, N));
	}
	return 0;
}
long long comb(int n, int k) {
	long long result = 1;
	if (k > n - k) {
		k = n - k;
	}
	for (int i = 0; i < k; ++i) {
		result *= (n - i);
		result /= (i + 1);
	}
	return result;
}