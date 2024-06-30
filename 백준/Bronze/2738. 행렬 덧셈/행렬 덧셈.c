#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 100

int main() {
	int arr1[SIZE][SIZE];
	int arr2[SIZE][SIZE];
	int n, m;

	scanf("%d %d", &n, &m);

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			scanf("%d", &arr1[i][j]);

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			scanf("%d", &arr2[i][j]);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
			printf("%d ", arr1[i][j] + arr2[i][j]);
		printf("\n");
	}

	return 0;
}