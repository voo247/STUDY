#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, m, k;

	scanf("%d %d %d", &n, &m, &k);
	
	int smallest = n - (m * k);
	int largest = smallest + (m - 1);
	if (smallest < 0) smallest = 0;
	if (largest < 0) largest = 0;

	printf("%d %d\n", smallest, largest);

	return 0;
}