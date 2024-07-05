#include <stdio.h>

int main(void)
{
	int wpaper[100][100] = { 0, };
	int many, left, under;
	int count = 0;

	scanf_s("%d", &many);
	for (int i = 0; i < many; i++) {
		scanf_s("%d %d", &left, &under);
		for (int j = 100 - (under + 10); j < 100 - under; j++) {
			for (int k = left; k < left + 10; k++) {
				wpaper[j][k] = 1;
			}
		}
	}
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			if (wpaper[i][j] == 1) count++;
		}
	}
	printf("%d", count);
	return 0;
}