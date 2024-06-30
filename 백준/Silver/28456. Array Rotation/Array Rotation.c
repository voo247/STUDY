#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define SIZE 100

void rotation1(int arr[][SIZE], int n, int row);
void rotation2(int arrA[][SIZE], int arr[][SIZE], int n);
void resetArr(int arrA[][SIZE], int arr[][SIZE], int n);
void printTheArr(int arr[][SIZE], int n);

int main() {
	int n;
	int arr[SIZE][SIZE];

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			scanf("%d", &arr[i][j]);

	int q;
	scanf("%d", &q);
	for (int i = 0; i < q; i++) {
		int rotation;
		scanf("%d", &rotation);

		if (rotation == 1) {
			int row;
			scanf("%d", &row);
			rotation1(arr, n, row - 1);
		}
		else if (rotation == 2) {
			int arrA[SIZE][SIZE];
			rotation2(arrA, arr, n);
			resetArr(arrA, arr, n);
		}
	}

	printTheArr(arr, n);

	return 0;
}

void rotation1(int arr[][SIZE], int n, int row) {
	int tmp = arr[row][n - 1];
	for (int i = n - 1; i > 0; i--)
		arr[row][i] = arr[row][i - 1];
	arr[row][0] = tmp;

	return 0;
}

void rotation2(int arrA[][SIZE], int arr[][SIZE], int n) {
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			arrA[i][j] = arr[n - 1 - j][i];

	return 0;
}

void resetArr(int arrA[][SIZE], int arr[][SIZE], int n) {
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			arr[i][j] = arrA[i][j];

	return 0;
}

void printTheArr(int arr[][SIZE], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%d", arr[i][j]);
			if(j < n - 1) printf(" ");
		}
		printf("\n");
	}

	return 0;
}