#include <stdio.h>
int main() {
	int n, a, b, ball = 1;
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf_s("%d %d", &a, &b);
		if (a == ball) ball = b;
		else if (b == ball) ball = a;
	}
	printf("%d", ball);
	return 0;
}