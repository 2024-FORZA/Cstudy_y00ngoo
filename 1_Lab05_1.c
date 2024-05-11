#include <stdio.h>
int main() {
	int cnt = 0;
	int num[10];
	for (int i = 0; i < 10; i++) {
		scanf_s("%d", &num[i]);
		num[i] = num[i] % 42;
	}
	for (int j = 0; j < 10; j++) {
		for (int k = j + 1; k < 10; k++) {
			if (num[j] == -1)break;
			if (num[j] == num[k])num[k] = -1;
		}
	}
	for (int i = 0; i < 10; i++) {
		if (num[i] != -1)cnt++;
	}
	printf("%d", cnt);
}