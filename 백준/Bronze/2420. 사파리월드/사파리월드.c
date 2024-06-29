#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, m;

	scanf("%d %d", &n, &m);

	long long int comp = (long long int)n - m;

	if (comp < 0)
		comp *= -1;

	printf("%lld\n", comp);
}