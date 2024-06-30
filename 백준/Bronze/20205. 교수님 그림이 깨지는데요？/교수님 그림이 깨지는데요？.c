#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

int main() {
	int n, k;
	int arr[SIZE][SIZE] = { 0 };

	scanf("%d %d", &n, &k);

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			scanf("%d", &arr[i][j]);

	for (int i = 0; i / k < n; i++) {
		for (int j = 0; j / k < n; j++)
			printf("%d ", arr[i / k][j / k]);
		printf("\n");
	}

	return 0;
}