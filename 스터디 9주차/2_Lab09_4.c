#include <stdio.h>

int main() {
	int n, count = 0, milk = 0;

	scanf("%d", &n);

	int store[n];

	for (int i = 0; i < n; i++) {
		scanf("%d", &store[i]);
	}

	for (int i = 0; i < n; i++) {
		if (store[i] == milk) {
			count++;
			milk = (milk + 1) % 3;
		}
	}
	printf("%d", count);

	return 0;
}