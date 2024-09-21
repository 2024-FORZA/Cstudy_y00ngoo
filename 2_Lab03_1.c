#include <stdio.h>

int main() {
	int num1, num2;

	scanf("%d %d", &num1, &num2);

	int step1 = num1 * (num2 % 10);
	int step2 = num1 * ((num2 / 10) % 10);
	int step3 = num1 * (num2 / 100);
	int result = num1 * num2;

	printf("%d\n", step1);
	printf("%d\n", step2);
	printf("%d\n", step3);
	printf("%d", result);

	return 0;
}