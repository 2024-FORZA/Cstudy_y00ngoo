#include <stdio.h>
#include <stdlib.h>

int main() {
	int num1, num2;
	int x1, y1, x2, y2;
	int manhattan_distance;

	scanf("%d %d", &num1, &num2);

	x1 = (num1 - 1) / 4;
	y1 = (num1 - 1) % 4;
	x2 = (num2 - 1) / 4;
	y2 = (num2 - 1) % 4;

	manhattan_distance = abs(x1 - x2) + abs(y1 - y2);

	printf("%d\n", manhattan_distance);

	return 0;
}