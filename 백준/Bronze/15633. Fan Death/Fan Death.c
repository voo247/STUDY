#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int divisorsSum(const int n) {
	int sum = 0;
	for (int i = 1; i <= n; i++)
		if (n % i == 0)
			sum += i;
	return sum;
}

int main() {
	int n;

	scanf("%d", &n);

	printf("%d\n", divisorsSum(n) * 5 - 24);

	return 0;
}