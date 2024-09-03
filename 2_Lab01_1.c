#include <stdio.h>

int main() {
	int num1, num2;
	scanf_s("%d %d", &num1, &num2);
	int result1 = ((num1 % 10) * 100) + ((num1 / 10 % 10) * 10) + (num1 / 100);
	int result2 = ((num2 % 10) * 100) + ((num2 / 10 % 10) * 10) + (num2 / 100);
	if (result1 > result2)
		printf("%d", result1);
	else
		printf("%d", result2);
}