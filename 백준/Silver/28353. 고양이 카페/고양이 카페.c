#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int whatsMax(int arr[], int n);
int whatsMin(int arr[], int n);

int main() {
	int n, kg;
	int arr[5000] = { 0 };
	int happy = 0;

	scanf("%d %d", &n, &kg);

	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	for (int cnt = 0; cnt < n / 2; cnt++) {
		int max = whatsMax(arr, n);
		int min = whatsMin(arr, n);

		while(max + min > kg)
			max = whatsMax(arr, n);

		if (max == -1 || min == -1)
			break;
		else if (max + min <= kg)
			happy++;
	}

	printf("%d\n", happy);
}

int whatsMax(int arr[], int n) {
	int max = -999;
	int maxIndex = 0;

	for (int i = 0; i < n; i++)
		if (arr[i] == 0)
			continue;
		else if (max < arr[i]) {
			max = arr[i];
			maxIndex = i;
		}

	arr[maxIndex] = 0;
	if (max == -999)
		return -1;
	else
		return max;
}

int whatsMin(int arr[], int n) {
	int min = 1000000999;
	int minIndex = 0;

	for (int i = 0; i < n; i++)
		if (arr[i] == 0)
			continue;
		else if (min > arr[i]) {
			min = arr[i];
			minIndex = i;
		}

	arr[minIndex] = 0;
	if (min == 1000000999)
		return -1;
	else return min;
}