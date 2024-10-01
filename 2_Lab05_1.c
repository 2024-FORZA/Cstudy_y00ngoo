#include <stdio.h>

int main() {
	int multi, plug, total = 0;

	scanf("%d", &multi);

	for (int i = 0; i < multi; i++) {
		scanf("%d", &plug);
		total += plug;
	}
	printf("%d", total - (multi - 1));

	return 0;
}