#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;

	scanf("%d", &n);

	printf("%d ", n);

	for (int i = 1; i < n; i++)
		printf("%d ", i);

	return 0;
}