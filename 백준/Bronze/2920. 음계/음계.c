#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 8

int main() {
	int arr[SIZE];
	int ascending_cnt = 0, descending_cnt = 0;

	for (int i = 0; i < SIZE; i++)
	scanf("%d", &arr[i]);

	for (int i = 0; i < SIZE; i++)
		if (arr[i] == i + 1)
			ascending_cnt++;
		else if (arr[i] == SIZE - i)
			descending_cnt++;
		else
			break;

	if (ascending_cnt == 8)
		printf("ascending\n");
	else if(descending_cnt == 8)
		printf("descending\n");
	else
		printf("mixed\n");
}