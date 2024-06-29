#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

long long int calculateAB(long long int, long long int);

int main() {
	long long int a, b;

	scanf("%lld %lld", &a, &b);

	printf("%lld\n", (calculateAB(a, b)));
}

long long int calculateAB(long long int A, long long int B) {
	long long int result = (A + B) * (A - B);
	return result;
}