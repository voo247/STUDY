#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, k;
	int answer = 1;

	scanf("%d %d", &n, &k);

	for (int i = n; i > n - k; i--)
		answer *= i;
	for (int i = k; i > 0; i--)
		answer /= i;

	printf("%d ", answer);

	return 0;
}