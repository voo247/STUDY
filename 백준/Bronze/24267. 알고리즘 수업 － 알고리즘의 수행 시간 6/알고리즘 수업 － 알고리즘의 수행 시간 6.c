#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	int highest = 3;
	long long int times = 0;
	for(int i = 1; i <= n - 2; i++)
		times = times + (long long int)i * (i + 1) / 2;

	printf("%lld\n%d\n", times, highest);

	return 0;
}