#include <stdio.h>

int main() {
	int A, B, C;

	scanf_s("%d %d", &A, &B);
	scanf_s("%d", &C);

	B += C;
	A += B / 60;
	B = B % 60;
	A = A % 24;

	printf("%d %d", A, B);

	return 0;
}