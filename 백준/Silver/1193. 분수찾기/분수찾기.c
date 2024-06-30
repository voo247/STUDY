#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define POLYGON 6

int main() {
	int X;
	int top = 1, bottom = 1;

	scanf("%d", &X);

	for (int i = 1; i < X; i++)
		if ((top + bottom) % 2 != 0) {
			if (bottom != 1)
				bottom -= 1;
			top += 1;
		}
		else if ((top + bottom) % 2 == 0) {
			if (top != 1)
				top -= 1;
			bottom += 1;
		}

	printf("%d/%d\n", top, bottom);

	return 0;
}