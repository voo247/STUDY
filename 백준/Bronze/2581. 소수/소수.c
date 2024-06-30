#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10000

int is_prime(int);

int main() {
	int M, N;
	int sum = 0, minPrime = -1;

	scanf("%d %d", &M, &N);
	
	for (int i = M; i <= N; i++)
		if (is_prime(i)) {
			sum += i;
			if (minPrime == -1)
				minPrime = i;
		}

	if(sum != 0) printf("%d\n", sum);
	printf("%d\n", minPrime);

	return 0;
}

int is_prime(int n) {
	int i;

	for (i = 2; i < n; i++)
		if (n % i == 0) break;
	
	if(i == n) return 1;
	else return 0;
}