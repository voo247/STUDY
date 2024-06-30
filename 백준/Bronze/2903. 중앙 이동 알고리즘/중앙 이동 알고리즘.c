#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int N;
	int once = 4;
	int twice = 0;
	int inside = 0;

	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		twice = twice * 2 + 1;
		inside = inside * 2 + 1;
	}
	
	printf("%d\n", once + twice * 4 + inside * inside);

	return 0;
}