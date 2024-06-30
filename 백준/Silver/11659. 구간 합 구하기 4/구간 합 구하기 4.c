#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int cumulativeSumAtIToJ(int arr[], int i, int j) {
	if (i < 0)
		return arr[j];
	return arr[j] - arr[i];
}

int main() {
	int n, m;
	int arr[100000] = { 0 };

	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		if (i == 0) continue;
		arr[i] += arr[i - 1];
	}

	for (int i = 0; i < m; i++) {
		int startIndex, endIndex;
		scanf("%d %d", &startIndex, &endIndex);
		printf("%d\n", cumulativeSumAtIToJ(arr, startIndex - 2, endIndex - 1));
	}

	return 0;
}