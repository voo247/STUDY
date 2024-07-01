#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char word[15] = "WelcomeToSMUPC";
	int n;

	scanf("%d", &n);

	int tmp = n % 14 - 1;
	if (tmp < 0) tmp = 13;
	printf("%c", word[tmp]);

	return 0;
}