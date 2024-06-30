#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b, k, x;

	scanf("%d %d %d %d", &a, &b, &k, &x);

	int smallest, biggest;
	if (a <= k - x)
		smallest = k - x;
	else
		smallest = a;
	if (k + x <= b)
		biggest = k + x;
	else
		biggest = b;

	int friends = biggest - smallest + 1;

	if (friends > 0)
		printf("%d\n", friends);
	else
		printf("IMPOSSIBLE\n");
}