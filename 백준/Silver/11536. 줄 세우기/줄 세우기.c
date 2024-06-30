#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 20

int is_increasing(char str[][12 + 1], int size) {
	for (int i = 0; i + 1 < size; i++)
		for (int j = 0; str[i][j] != '\0' && str[i + 1][j] != '\0'; j++) {
			if (str[i][j] < str[i + 1][j])
				break;
			else if (str[i][j] == str[i + 1][j])
				continue;
			else
				return 0;
		}

	return 1;
}

int is_decreasing(char str[][12 + 1], int size) {
	for (int i = 0; i + 1 < size; i++)
		for (int j = 0; str[i][j] != '\0' && str[i + 1][j] != '\0'; j++) {
			if (str[i][j] > str[i + 1][j])
				break;
			else if (str[i][j] == str[i + 1][j])
				continue;
			else
				return 0;
		}

	return 1;
}

int main() {
	int n, typeCase;
	char str[SIZE][12 + 1];
	char type[3][20] = { "INCREASING", "DECREASING", "NEITHER" };

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
		scanf("%s", str[i]);

	if (is_increasing(str, n))
		typeCase = 0;
	else if (is_decreasing(str, n))
		typeCase = 1;
	else
		typeCase = 2;

	printf("%s\n", type[typeCase]);

	return 0;
}