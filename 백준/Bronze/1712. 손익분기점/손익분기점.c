#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a, b, c;

	scanf("%d %d %d", &a, &b, &c);

	int profitPoint;

	if (c <= b)
		profitPoint = -1;
	else {
		profitPoint = a / (c - b);
		if ((double)a / (c - b) >= profitPoint) profitPoint++;
	}

	printf("%d\n", profitPoint);

	return 0;
}