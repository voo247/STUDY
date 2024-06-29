#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE 500

void printReverse(char str[]);

int main() {
	while (1) {
		char str[SIZE + 1];

		scanf("%[^\n]s", str);
		if (strcmp(str, "END") == 0) break;

		printReverse(str);
	}

	return 0;
}

void printReverse(char str[]) {
	char reverse[SIZE + 1] = { '\0' };

	int strLen = 0;
	for (strLen = 0; str[strLen] != '\0'; strLen++);

	for (int i = 0; i < strLen; i++)
		reverse[i] = str[strLen - 1 - i];
	reverse[strLen] = '\0';

	printf("%s\n", reverse);
	getchar();

	return;
}