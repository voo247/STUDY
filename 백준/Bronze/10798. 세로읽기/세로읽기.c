#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 16
#define WORD 5

int main() {
	char str[WORD][SIZE];
	int len[WORD] = { 0 };

	for (int i = 0; i < WORD; i++)
		scanf("%s", str[i]);

	for (int i = 0; i < WORD; i++)
		for (len[i] = 0; str[i][len[i]] != '\0'; len[i]++);

	for (int j = 0; j < SIZE; j++)
		for (int i = 0; i < WORD; i++)
			if (j < len[i]) printf("%c", str[i][j]);

	return 0;
}