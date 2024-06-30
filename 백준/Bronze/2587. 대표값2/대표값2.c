#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 5

int arr[SIZE];

int main() {
    int sum = 0;

	for (int i = 0; i < SIZE; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

	for (int i = 0; i < SIZE; i++)
		for (int j = 0; j < SIZE - 1 - i; j++)
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}

	printf("%d\n", sum / SIZE);
	printf("%d\n", arr[2]);
}