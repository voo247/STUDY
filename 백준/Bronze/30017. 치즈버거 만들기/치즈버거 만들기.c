#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 1001

int main() {
	int a, b;

	scanf("%d %d", &a, &b);

	if (a > b)
		printf("%d\n", (b + 1) + b);
	else
		printf("%d\n", a + (a - 1));

	return 0;
}