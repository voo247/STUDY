#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE 100
#define WORD 11

int main() {
	char arr[SIZE][WORD];
	char answer[SIZE][WORD];
	char start = '*', end = '*';
	int n, m;

	scanf("%d", &n);
	getchar();
	for (int i = 0; i < n; i++) {
		scanf("%s", arr[i]);

		if (arr[i][0] == '?' && i >= 1)
			start = arr[i - 1][strlen(arr[i - 1]) - 1];
		else if (arr[i - 1][0] == '?' && i >= 1)
			end = arr[i][0];
	}

	scanf("%d", &m);
	getchar();
	for (int i = 0; i < m; i++) {
		scanf("%s", answer[i]);

		if ((answer[i][0] == start || start == '*') && (answer[i][strlen(answer[i]) - 1] == end || end == '*')) {
			int j;
			for (j = 0; j < n; j++)
				if (strcmp(answer[i], arr[j]) == 0)
					break;

			if (j == n) {
				printf("%s\n", answer[i]);
				break;
			}
		}
	}
	return 0;
}