#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define SIZE 100000

int arr[SIZE];

int compare(const void* a, const void* b) {
	if (*(int*)a > *(int*)b)
		return 1;
	else if (*(int*)a < *(int*)b)
		return -1;
	else
		return 0;
}

int main() {
	int n, x;

	scanf("%d %d", &n, &x);

	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		if (i > 0) arr[i - 1] += arr[i];
	}

	qsort(arr, n - 1, sizeof(int), compare);

	printf("%d\n", x * arr[0]);

	return 0;
}