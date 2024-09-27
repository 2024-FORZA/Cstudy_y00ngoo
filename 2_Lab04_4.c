#include <stdio.h>

int main() {
	int price, change;
	int coin[6] = { 500,100,50,10,5,1 };
	int count = 0;

	scanf("%d", &price);
	change = 1000 - price;

	for (int i = 0; i < 6; i++) {
		count += change / coin[i];
		change %= coin[i];
	}
	printf("%d", count);

	return 0;
}