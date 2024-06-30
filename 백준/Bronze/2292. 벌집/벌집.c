#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define POLYGON 6

int main() {
	int N;
	int cnt = 1;

	scanf("%d", &N);

	int index = 1;
	for (int i = 1; index < N; i++, cnt++)
		index = index + POLYGON * i;
	
	printf("%d\n", cnt);

	return 0;
}