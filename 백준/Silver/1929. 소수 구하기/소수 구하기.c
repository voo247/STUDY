#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 1000000

int prime[SIZE] = { 0 };

int main() {
	int M, N;
	prime[1] = 1;

	scanf("%d %d", &M, &N);

	for (int i = 2; i <= N; i++)
		if(prime[i] != 1)
			for (int j = i + i; j <= N; j += i) {
				if (prime[j] == 1)
					continue;
				else
					prime[j] = 1;
			}

	for (int i = M; i <= N; i++)
		if (prime[i] == 0)
			printf("%d\n", i);
		else
			continue;

	return 0;
}