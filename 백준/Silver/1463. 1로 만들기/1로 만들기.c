#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int Nto1(int n, int* memo) {
	if (memo[n])
		return memo[n];

	if (n == 1)
		return 0;

	int a = (n % 3 == 0) ? Nto1(n / 3, memo) + 1 : -1;
	int b = (n % 2 == 0) ? Nto1(n / 2, memo) + 1 : -1;
	int c = Nto1(n - 1, memo) + 1;

	if (a != -1 && (b == -1 || a <= b) && a <= c) {
		memo[n] = a;
	}
	else if (b != -1 && (a == -1 || b <= a) && b <= c) {
		memo[n] = b;
	}
	else {
		memo[n] = c;
	}

	return memo[n];
}

int main(void) {
	int n;
	scanf("%d", &n);

	int* memo = (int*)malloc(sizeof(int) * (n + 1));
	for (int i = 0; i <= n; i++)
		memo[i] = 0;

	printf("%d", Nto1(n, memo));

	free(memo);

	return 0;
}
