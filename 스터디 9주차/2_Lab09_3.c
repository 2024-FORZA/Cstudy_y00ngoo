#include <stdio.h>

long long int gcd(long long int a, long long int b) {
	while (b != 0) {
		long long int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}
long long int lcm(long long int a, long long int b) {
	return a / gcd(a, b) * b;
}
int main() {
	long long int a, b;

	if (scanf("%lld %lld", &a, &b) != 2) {
		return 1;
	}

	printf("%lld", lcm(a, b));

	return 0;
}