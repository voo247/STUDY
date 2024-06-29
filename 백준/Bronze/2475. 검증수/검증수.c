#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 5

void whatsSquare(int[]);

int main() {
	int arr[SIZE];
    int squareSum = 0, code;

	for (int i = 0; i < SIZE; i++)
		scanf("%d", &arr[i]);

	whatsSquare(arr);
	
	for (int i = 0; i < SIZE; i++)
        squareSum += arr[i];
    code = squareSum % 10;
    
	printf("%d\n", code);
}

void whatsSquare(int arr[]) {
	for(int i = 0; i < SIZE; i++)
		arr[i] = arr[i] * arr[i];

	return 0;
}