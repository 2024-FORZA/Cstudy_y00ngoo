#include <stdio.h>

int main() {
	int A, B, C;
	int result;
	int count[10] = { 0 };
	int num;

	scanf("%d", &A);
	scanf("%d", &B);
	scanf("%d", &C);

	result = A * B * C;

	while (result > 0) {
		num = result % 10;
		count[num]++;
		result /= 10;
	}
	for (int i = 0; i < 10; i++) {
		printf("%d\n", count[i]);
	}
	return 0;
}