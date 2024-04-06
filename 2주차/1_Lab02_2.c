#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	long A, B, C;
	scanf("%ld %ld %ld", &A, &B, &C);
	printf("%ld\n", (A + B) % C);
	printf("%ld\n", (A % C + B % C) % C);
	printf("%ld\n", (A * B) % C);
	printf("%ld", (A % C * B % C) % C);
}