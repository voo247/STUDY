#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 101

void reverseString(char str[]);

int main() {
	int B, N;
	char N_B[SIZE] = { '\0' };

	scanf("%d %d", &N, &B);

	for (int i = 0; N > 0; i++, N /= B)
		if ((N % B) >= 10)
			N_B[i] = 'A' + N % B - 10;
		else
			N_B[i] = '0' + N % B;

	reverseString(N_B);

	printf("%s", N_B);

	return 0;
}

void reverseString(char str[]) {
	int len;
	for (len = 0; str[len] != '\0'; len++);

	for (int i = 0; i < len / 2; i++) {
		char tmp = str[i];
		str[i] = str[len - 1 - i];
		str[len - 1 - i] = tmp;
	}

	return 0;
}