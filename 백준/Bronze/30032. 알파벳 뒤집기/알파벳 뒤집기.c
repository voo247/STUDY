#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 11

int main() {
	int n, rotation;
	char word[SIZE][SIZE];

	scanf("%d %d", &n, &rotation);
	getchar();

	for (int i = 0; i < n; i++)
		scanf("%s", word[i]);

	if (rotation == 1) {
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				if (word[i][j] == 'd')
					word[i][j] = 'q';
				else if (word[i][j] == 'b')
					word[i][j] = 'p';
				else if (word[i][j] == 'q')
					word[i][j] = 'd';
				else if (word[i][j] == 'p')
					word[i][j] = 'b';
	}
	else if (rotation == 2) {
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				if (word[i][j] == 'd')
					word[i][j] = 'b';
				else if (word[i][j] == 'b')
					word[i][j] = 'd';
				else if (word[i][j] == 'q')
					word[i][j] = 'p';
				else if (word[i][j] == 'p')
					word[i][j] = 'q';
	}

	for (int i = 0; i < n; i++)
		printf("%s\n", word[i]);

	return 0;
}