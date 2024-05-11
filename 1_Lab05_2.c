#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, v, i, j, count = 0;
	int num[100];
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &num[i]);
	}
	scanf("%d", &v);
	for (j = 0; j < n; j++) {
		if (v == num[j])count++;
	}
	printf("%d", count);
	return 0;
}