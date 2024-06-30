#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int arr[100000] = { 0 };

int findTheBiggestValueCumSumAtKDays(int arr[], int size, int k) {
	int max = -999;	//가능한 최소 맥스값 = -100
	for (int i = k - 1, j = -1; i < size; i++, j++)
		if (j < 0 && max < arr[i]) max = arr[i];
		else if (max < arr[i] - arr[j])
			max = arr[i] - arr[j];
	return max;
}

int main() {
	int n, k;

	scanf("%d %d", &n, &k);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		if (i == 0) continue;
		arr[i] += arr[i - 1];
	}

	printf("%d\n", findTheBiggestValueCumSumAtKDays(arr, n, k));

	return 0;
}