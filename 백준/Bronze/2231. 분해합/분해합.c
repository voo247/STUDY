#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;

	scanf("%d", &n);

	int size = 0;

	for (int tmp = n; tmp > 0; tmp /= 10, size++);

	int smallest = n - (size * 9);

	while (1) {
		int sum = smallest;
		for (int i = 0, tmp = smallest; tmp > 0; tmp /= 10, i++)
			sum = sum + (tmp % 10);

		if (n == sum)
			break;
		else if (n < smallest) {
			smallest = 0;
			break;
		}

		smallest++;
	}

	printf("%d\n", smallest);

	return 0;
}