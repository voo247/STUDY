#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10000

int is_prime(int);

int main() {
	int cnt, primeCnt = 0;

	scanf("%d", &cnt);
	
	for (int i = 0; i < cnt; i++) {
		int num;

		scanf("%d", &num);

		if (is_prime(num))
			primeCnt++;
	}

	printf("%d\n", primeCnt);

	return 0;
}

int is_prime(int n) {
	int i;

	for (i = 2; i < n; i++)
		if (n % i == 0) break;
	
	if(i == n) return 1;
	else return 0;
}