#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10000

int is_multiple(int, int);

int main() {
	while (1) {
		int num, sum = 0;
		int multiple[SIZE] = { 0 };

		scanf("%d", &num);
		if (num == -1) break;

		for (int i = 1, j = 0; i < num; i++)
			if (is_multiple(num, i)) {
				multiple[j++] = i;
				sum += i;
			}
			else continue;

		if (sum == num) {
			printf("%d = %d", num, multiple[0]);
			for (int i = 1; multiple[i] != 0; i++)
				printf(" + %d", multiple[i]);
			printf("\n");
		}
		else
			printf("%d is NOT perfect.\n", num);
	}

	return 0;
}

int is_multiple(int a, int b) {
	if (a % b == 0) return 1;
	else return 0;
}