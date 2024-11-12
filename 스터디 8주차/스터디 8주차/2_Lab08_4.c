#include <stdio.h>
#include <string.h>

int main() {
	char words[5][16] = { 0 };

	for (int i = 0; i < 5; i++) {
		scanf("%s", words[i]);
	}
	char result[76] = { 0 };
	int idx = 0;

	for (int col = 0; col < 15; col++) {
		for (int row = 0; row < 5; row++) {
			if (words[row][col] != '\0') {
				result[idx++] = words[row][col];
			}
		}
	}
	printf("%s", result);

	return 0;
}