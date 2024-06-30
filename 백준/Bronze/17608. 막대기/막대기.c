#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define SIZE 100000

int h[SIZE];

int main() {
	int n;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &h[i]);
	}

	int view = 0;
	for (int i = n - 1, lastBuilding = 0; i >= 0; i--) {
		if (h[i] > lastBuilding) {
			view++;
			lastBuilding = h[i];
		}
	}

	printf("%d\n", view);

	return 0;
}