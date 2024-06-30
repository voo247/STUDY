#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void descending(int arr[], int n);

int main() {
	int n;
	int level[100];
	int levelSum = 0, union_point = 0;

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
		scanf("%d", &level[i]);

	if (42 <= n) {
		if (42 < n)
			descending(level, n);

		n = 42;
	}

	for (int i = 0; i < n; i++) {
		levelSum += level[i];

		if (250 <= level[i])
			union_point += 5;
		else if (200 <= level[i])
			union_point += 4;
		else if (140 <= level[i])
			union_point += 3;
		else if (100 <= level[i])
			union_point += 2;
		else if (60 <= level[i])
			union_point += 1;
	}

	printf("%d %d", levelSum, union_point);

	return 0;
}

void descending(int arr[], int n) {
	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++)
			if (arr[i] < arr[j]) {
				int tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}

	return 0;
}