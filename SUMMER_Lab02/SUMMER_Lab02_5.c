#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)

#include <stdio.h>

int GCD(int a, int b)
{
	if (b == 0)
	{
		return a;
	}
	else
	{
		return GCD(b, a % b);
	}
}
int main(void)
{
	int a, b, c, d;
	scanf("%d %d", &a, &b);
	scanf("%d %d", &c, &d);

	int bunja = a * d + b * c;
	int bunmo = b * d;
	int gcd_of_bunsu = GCD(bunja, bunmo);

	printf("%d %d", bunja / gcd_of_bunsu, bunmo / gcd_of_bunsu);
	return 0;
}