#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10000

int is_multiple(int, int);

int main() {
	int N, K;
	int multiple[SIZE] = { 0 };

	scanf("%d %d", &N, &K);
	
	for (int i = 1, cnt = 0; i <= N && cnt < K; i++)
		if (is_multiple(N, i)) multiple[cnt++] = i;
		else continue;

	printf("%d", multiple[K - 1]);

	return 0;
}

int is_multiple(int a, int b) {
	if (a % b == 0) return 1;
	else return 0;
}