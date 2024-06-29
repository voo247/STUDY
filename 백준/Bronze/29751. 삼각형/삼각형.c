#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 50

int main() {
	int a, b;
	
	scanf("%d %d", &a, &b);
	printf("%.1f\n", (double)a * b / 2);

	return 0;
}