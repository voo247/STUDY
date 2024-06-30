#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 4

int main() {
	int x[SIZE], y[SIZE];
	int sameX, sameY;

	for (int i = 0; i < SIZE - 1; i++)
		scanf("%d %d", &x[i], &y[i]);

	for (int i = 0; i < SIZE - 1; i++)
		for (int j = i + 1; j < SIZE - 1; j++) {
			if (x[i] == x[j]) sameX = x[i];
			if (y[i] == y[j]) sameY = y[i];
		}

	for (int i = 0; i < SIZE - 1; i++) {
		if (x[i] != sameX) x[3] = x[i];
		if (y[i] != sameY) y[3] = y[i];
	}
	
	printf("%d %d\n", x[SIZE - 1], y[SIZE - 1]);

		return 0;
	}