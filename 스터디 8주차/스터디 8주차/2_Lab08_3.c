#include <stdio.h>

int main() {
	int A, B, C;
	scanf("%d %d %d", &A, &B, &C);

	int time[101] = { 0 };
	int start, end;

	for (int i = 0; i < 3; i++) {
		scanf("%d %d", &start, &end);
		for (int j = start; j < end; j++) {
			time[j]++;
		}
	}
	int total_cost = 0;

	for (int i = 1; i <= 100; i++) {
		if (time[i] == 1) {
			total_cost += A;
		}
		else if (time[i] == 2) {
			total_cost += B * 2;
		}
		else if (time[i] == 3) {
			total_cost += C * 3;
		}
	}
	printf("%d", total_cost);

	return 0;
}