#include <stdio.h>
#include <string.h>

int main() {
	char bowls[51];
	scanf("%s", bowls);

	int height = 10;
	int length = strlen(bowls);

	for (int i = 1; i < length; i++) {
		if (bowls[i] == bowls[i - 1]) {
			height += 5;
		}
		else {
			height += 10;
		}
	}
	printf("%d", height);
	return 0;
}