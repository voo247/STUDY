#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int calcFunny(int n) {
	if (n == 2)
		return 1;
	else if (n < 2)
		return 0;

	if (n % 2 == 0)
		return (n / 2) * (n / 2) + calcFunny(n / 2) * 2;
	else
		return (n / 2 + 1) * (n / 2) + calcFunny(n / 2) + calcFunny(n / 2 + 1);
}

int main() {
	int n;

	scanf("%d", &n);

	printf("%d\n", calcFunny(n));

	return 0;
}