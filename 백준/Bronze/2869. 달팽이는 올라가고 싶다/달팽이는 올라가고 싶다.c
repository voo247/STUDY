#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int A, B, V;
	int days = 1;

	scanf("%d %d %d", &A, &B, &V);

	if (((V - A) % (A - B)) != 0)
		days = days + (V - A) / (A - B) + 1;
	else
		days = days + (V - A) / (A - B);

	printf("%d\n", days);

	return 0;
}