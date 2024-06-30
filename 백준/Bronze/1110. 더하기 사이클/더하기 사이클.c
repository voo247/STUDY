#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;

	scanf("%d", &n);

	int cycle = 1, newN = n;
	while (1) {
		newN = newN % 10 * 10 + (newN / 10 + newN % 10) % 10;

		if (n == newN)
			break;
		else
			cycle++;
	}

	printf("%d\n", cycle);

	return 0;
}