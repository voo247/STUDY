#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int calcGcd(int a, int b) {
	if (a % b == 0)
		return b;
	return calcGcd(b, a % b);
}

int main() {
	int n, m;
	
	scanf("%d:%d", &n, &m);

	int gcd = calcGcd(n, m);

	printf("%d:%d\n", n / gcd, m / gcd);

	return 0;
}