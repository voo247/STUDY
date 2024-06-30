#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int is_factor(int, int);
int is_multiple(int, int);

int main() {
	int first, second;

	while (1) {
		scanf("%d %d", &first, &second);
		if (first == 0 && second == 0) break;

		if (is_factor(first, second)) printf("factor\n");
		else if (is_multiple(first, second)) printf("multiple\n");
		else printf("neither\n");
	}

	return 0;
}

int is_factor(int a, int b) {
	if (b % a == 0) return 1;
	else return 0;
}

int is_multiple(int a, int b) {
	if (a % b == 0) return 1;
	else return 0;
}