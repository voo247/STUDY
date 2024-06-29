#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int arr[5];

	for (int i = 0; i < 5; i++)
		scanf("%d", &arr[i]);

	int first = 1;
	for (int i = 0; i < 2; i++)
		first *= arr[i];
	int second = 1;
	for (int i = 2; i < 5; i++)
		second *= arr[i];

	printf("%d\n", first - second);

	return 0;
}