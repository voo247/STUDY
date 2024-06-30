#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 400

int main() {
	int n, m;
	char ascii[SIZE][SIZE + 1];

	scanf("%d %d", &n, &m);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			int r, g, b;
			scanf("%d %d %d ", &r, &g, &b);

			int color = 2126 * r + 7152 * g + 722 * b;
			
			if (2040000 <= color)
				ascii[i][j] = 46;
			else if (1530000 <= color)
				ascii[i][j] = 45;
			else if (1020000 <= color)
				ascii[i][j] = 43;
			else if (510000 <= color)
				ascii[i][j] = 111;
			else if (0 <= color)
				ascii[i][j] = 35;
		}
		ascii[i][m] = '\0';
	}

	for (int i = 0; i < n; i++)
		printf("%s\n", ascii[i]);

	return 0;
}