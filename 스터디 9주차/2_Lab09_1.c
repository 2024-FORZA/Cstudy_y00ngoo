#include <stdio.h>
#include <stdlib.h>

int main() {
	int number[3];
	char order[4];
	int sorted[3];

	scanf("%d %d %d", &number[0], &number[1], &number[2]);
	scanf("%s", order);

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2 - i; j++) {
			if (number[j] > number[j + 1]) {
				int temp = number[j];
				number[j] = number[j + 1];
				number[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < 3; i++) {
		if (order[i] == 'A') {
			sorted[i] = number[0];
		}
		else if (order[i] == 'B') {
			sorted[i] = number[1];
		}
		else if (order[i] == 'C') {
			sorted[i] = number[2];
		}
	}

	printf("%d %d %d", sorted[0], sorted[1], sorted[2]);
	return 0;
}