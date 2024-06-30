#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	printf("%lld\n%d\n", (long long int)n * n, 2);

	return 0;
}