#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 3

int main() {
	int arr[SIZE];

	for (int i = 0; i < SIZE; i++)
		scanf("%d", &arr[i]);

	for (int i = 0; i < SIZE; i++)
		for(int j = i + 1; j < SIZE; j++)
			if(arr[i] < arr[j]) {
				int tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}

	printf("%d\n", arr[SIZE / 2]);
}