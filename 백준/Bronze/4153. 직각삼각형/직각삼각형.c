#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	while (1) {
		int a, b, c;

		scanf("%d %d %d", &a, &b, &c);
		if (a == 0 && b == 0 && c == 0)
			break;

		a *= a;
		b *= b;
		c *= c;

		if (a == b + c || b == c + a || c == a + b)
			printf("right\n");
		else
			printf("wrong\n");
	}
}