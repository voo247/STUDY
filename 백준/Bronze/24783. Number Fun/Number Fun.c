#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int check(int a, int b, int c) {
	if (a + b == c)
		return 1;
	else if (a - b == c)
		return 1;
	else if (b - a == c)
		return 1;
	else if (a * b == c)
		return 1;
	else if (a % b == 0 && a / b == c)
		return 1;
	else if (b % a == 0 && b / a == c)
		return 1;
	else
		return 0;
}

int main() {
	int n;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		int a, b, c;

		scanf("%d %d %d", &a, &b, &c);
		
		if (check(a, b, c))
			printf("Possible\n");
		else
			printf("Impossible\n");
	}

	return 0;
}