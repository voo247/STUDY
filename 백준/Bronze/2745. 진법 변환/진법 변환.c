#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 101

int main() {
	int B, N_B = 0;
	char N[SIZE];

	scanf("%s %d", N, &B);

	int len;
	for (len = 0; N[len] != '\0'; len++);

	for (int i = 0; i < len; i++) {
		int power = 1;
		for (int j = 1; j <= i; j++)
			power *= B;

		if (N[len - 1 - i] >= 'A' && N[len - 1 - i] <= 'Z')
			N_B += (N[len - 1 - i] - 'A' + 10) * power;
		else
			N_B += (N[len - 1 - i] - '0') * power;
	}

	printf("%d", N_B);

	return 0;
}