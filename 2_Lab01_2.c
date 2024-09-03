#include <stdio.h>

int main() {
	int e, f, c;
	scanf_s("%d %d %d", &e, &f, &c);

	int bottle = e + f;
	int drink = 0;

	while (bottle >= c) {
		int new = bottle / c;
		drink += new;
		bottle = bottle % c + new;
	}

	printf("%d", drink);

	return 0;
}