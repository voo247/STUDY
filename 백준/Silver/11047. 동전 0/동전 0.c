#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n, k, a[10];

	scanf("%d %d", &n, &k);

	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);

	int cnt = 0;
	for (int i = n - 1; i >= 0 || n == 0; i--) {
		cnt = cnt + (k / a[i]);
		k %= a[i];
	}

	printf("%d\n", cnt);

	return 0;
}