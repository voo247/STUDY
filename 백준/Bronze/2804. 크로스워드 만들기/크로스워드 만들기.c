#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define WORD_MAX_SIZE 30

int hasElement(char b[], char a) {
	for (int i = 0; b[i] != '\0'; i++)
		if (a == b[i])
			return i;

	return -1;
}

int main(void) {
	char a[WORD_MAX_SIZE + 1], b[WORD_MAX_SIZE + 1];
	char newWord[WORD_MAX_SIZE][WORD_MAX_SIZE + 1];

	scanf("%s %s", a, b);

	int crossPointRow = -1, crossPointCol;
	for (int i = 0; b[i] != '\0'; i++) {
		crossPointRow = hasElement(b, a[i]);
		if (crossPointRow != -1) {
			crossPointCol = i;
			break;
		}
	}

	for (int i = 0, indexA = 0, indexB = 0; b[i] != '\0'; i++) {
		int j = 0;
		for (; a[j] != '\0'; j++) {
			newWord[i][j] = '.';
			if (j == crossPointCol)
				newWord[i][j] = b[indexB++];
			if (i == crossPointRow)
				newWord[i][j] = a[indexA++];
		}
		newWord[i][j] = '\0';

	}

	for (int i = 0; b[i] != '\0'; i++) {
		for (int j = 0; a[j] != '\0'; j++)
			printf("%c", newWord[i][j]);
		printf("\n");
	}

	return 0;
}