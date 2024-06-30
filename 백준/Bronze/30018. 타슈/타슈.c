#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 100

int main() {
	int n;
	int arr[SIZE];

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	int cnt = 0;
	for (int i = 0, tmp; i < n; i++) {
		scanf("%d", &tmp);
		if (tmp < arr[i])
			cnt += arr[i] - tmp;
	}

	printf("%d\n", cnt);

	return 0;
}