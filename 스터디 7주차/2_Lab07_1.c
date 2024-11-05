#include <stdio.h>

int main() {
	int A, B, V;
	scanf("%d %d %d", &A, &B, &V);

	int day = (V - B) / (A - B);

	if ((V - B) % (A - B) != 0) {
		day++;
	}

	printf("%d", day);
	return 0;
}