#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 5

int main() {
	int arr[SIZE];

	for (int i = 0; i < SIZE; i++)
		scanf("%d", &arr[i]);

	for (int i = 0; i < SIZE; i++)
		for (int j = i + 1; j < SIZE; j++)
			if (arr[i] == arr[j]){
				arr[i] = -1;
				arr[j] = -1;
			}

	for (int i = 0; i < SIZE; i++)
		if(arr[i] != -1)
			printf("%d\n", arr[i]);

	return 0;
}