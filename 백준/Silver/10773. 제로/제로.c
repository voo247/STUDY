#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int arr[100000];

int main() {
	int n;
	int sum = 0;
	scanf("%d", &n);

	for (int cnt = 0, index = 0; cnt < n; cnt++, index) {
		scanf("%d", &arr[index]);

		if(arr[index] == 0)
			sum -= arr[--index];
		else
			sum += arr[index++];
	}

	printf("%d\n", sum);

	return 0;
}