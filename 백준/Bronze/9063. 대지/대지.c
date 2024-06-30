#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 100000

int whatsMin(int[], int);
int whatsMax(int[], int);

int main() {
	int num;
	int x[SIZE] = { 0 }, y[SIZE] = { 0 };

	scanf("%d", &num);
	for(int i = 0; i < num; i++)
		scanf("%d %d", &x[i], &y[i]);

	int max_x = whatsMax(x, num);
	int min_x = whatsMin(x, num);
	int max_y = whatsMax(y, num);
	int min_y = whatsMin(y, num);

	printf("%d\n", (max_x - min_x) * (max_y - min_y));

	return 0;
}

int whatsMin(int arr[], int num) {
	int min = 10001;

	for (int i = 0; i < num; i++)
		if (min > arr[i])
			min = arr[i];

	return min;
}

int whatsMax(int arr[], int num) {
	int max = -10001;

	for (int i = 0; i < num; i++)
		if (max < arr[i])
			max = arr[i];

	return max;
}