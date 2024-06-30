#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int arr[100];
	int n, m;

	scanf("%d %d", &n, &m);

	for (int i = 0; i < n; i++)
		arr[i] = i + 1;

	for (int cnt = 0; cnt < m; cnt++) {
		int i, j, k, tmp;

		scanf("%d %d", &i, &j);
		i--; j--;

		for (k = 0; k < (j - i + 1) / 2; k++) {
			tmp = arr[i + k];
			arr[i + k] = arr[j - k];
			arr[j - k] = tmp;
		}
	}

	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);

	return 0;
}