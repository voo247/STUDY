#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n, a, b;

	scanf("%d", &n);
	scanf("%d %d", &a, &b);

	if (n < (a / 2) + b)
		printf("%d\n", n);
	else if (n >= (a / 2) + b)
		printf("%d\n", (a / 2) + b);

	return 0;
}