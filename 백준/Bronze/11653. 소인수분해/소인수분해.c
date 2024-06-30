#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int is_factor(int, int);

int main() {
	int N;

	scanf("%d", &N);
	
	for (int i = 2; N > 1;)
		if (is_factor(N, i)) {
			printf("%d\n", i);
			N /= i;
		}
		else i++;

	return 0;
}

int is_factor(int a, int b) {
	if (a % b == 0) return 1;
	else return 0;
}