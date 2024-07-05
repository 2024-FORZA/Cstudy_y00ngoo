#include <stdio.h>
int main() {
	char s[16];
	int ss = 0;

	scanf_s("%s", s);
	int i = 0;
	while (s[i] != '\0') {
		if (s[i] >= 'A' && s[i] <= 'C') ss += 3;
		else if (s[i] >= 'D' && s[i] <= 'F') ss += 4;
		else if (s[i] >= 'G' && s[i] <= 'I') ss += 5;
		else if (s[i] >= 'J' && s[i] <= 'L') ss += 6;
		else if (s[i] >= 'M' && s[i] <= 'O') ss += 7;
		else if (s[i] >= 'P' && s[i] <= 'S') ss += 8;
		else if (s[i] >= 'T' && s[i] <= 'V') ss += 9;
		else ss += 10;
		i++;
	}
	printf("%d\n", ss);
	return 0;
}