#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	long long int times = (long long int)n * n * n;
	int highest = 3;

	printf("%lld\n%d\n", times, highest);

	return 0;
}