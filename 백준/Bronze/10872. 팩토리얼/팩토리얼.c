#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int factorial = 1;
	int n;

	scanf("%d", &n);

	for (int i = 2; i <= n; i++)
		factorial *= i;

	printf("%d\n", factorial);
}