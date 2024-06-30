#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int t;

	scanf("%d", &t);

	for (int i = 0; i < t; i++) {
		int n;

		scanf("%d", &n);

		while (n / 5 > 0) {
			printf("++++ ");
			n -= 5;
		}
		while (n > 0) {
			printf("|");
			n--;
		}
		printf("\n");
	}

	return 0;
}