#include <stdio.h>

int main() {
	int N, time;
	int Y_cost = 0, M_cost = 0;

	scanf_s("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf_s("%d", &time);

		Y_cost += (time / 30 + 1) * 10;
		M_cost += (time / 60 + 1) * 15;
	}

	if (Y_cost < M_cost) {
		printf("Y %d", Y_cost);
	}
	else if (Y_cost > M_cost) {
		printf("M %d", M_cost);
	}
	else {
		printf("Y M %d", Y_cost);
	}

	return 0;
}