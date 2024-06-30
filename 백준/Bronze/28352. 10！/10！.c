#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	long long int fact = 1;
	int n;
	int weeks;

	scanf("%d", &n);

	for (int i = 2; i <= n; i++)
		fact *= i;

	if (fact % (60 * 60 * 24 * 7) == 0)
		weeks = fact / (60 * 60 * 24 * 7);

	printf("%d\n", weeks);
}