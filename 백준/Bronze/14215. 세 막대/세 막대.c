#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 3

void ascending(int[]);

int main() {
	int arr[SIZE];

	for (int i = 0; i < SIZE; i++)
		scanf("%d", &arr[i]);

	ascending(arr);
	
	int sumWithoutMax = 0, sum;
	for (int i = 0; i < SIZE - 1; i++)
		sumWithoutMax += arr[i];

	if (arr[SIZE - 1] < sumWithoutMax)
		sum = sumWithoutMax + arr[SIZE - 1];
	else
		sum = sumWithoutMax * 2 - 1;

	printf("%d\n", sum);
}

void ascending(int arr[]) {
	for(int i = 0; i < SIZE; i++)
		for(int j = i; j < SIZE; j++)
			if (arr[i] > arr[j]) {
				int tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}

	return 0;
}