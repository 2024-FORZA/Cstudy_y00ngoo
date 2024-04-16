#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int line, i, j;
	scanf("%d", &line);
	for (i = 1; i <= line; i++) {
		for (j = 1; j <= (line - i); j++)
			printf(" ");
		for (j = 1; j <= i; j++)
			printf("*");
		printf("\n");
	}
	return 0;
}