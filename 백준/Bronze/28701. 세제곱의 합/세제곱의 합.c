#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;

	scanf("%d", &n);

	int first = n * (n + 1) / 2;
	int second = first * first;
	int third = second;

	printf("%d\n%d\n%d\n", first, second, third);

	return 0;
}