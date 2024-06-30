#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 9

int main() {
	int arr[SIZE][SIZE];
	int max = -99, x, y;

	for (int i = 0; i < SIZE; i++)
		for (int j = 0; j < SIZE; j++) {
			scanf("%d", &arr[i][j]);

			if (max < arr[i][j]) {
				max = arr[i][j];
				x = i + 1;
				y = j + 1;
			}
		}

	printf("%d\n", max);
	printf("%d %d", x, y);

	return 0;
}