#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAX_SIZE 400

int isVertical(char upper, char lower);
int isHorizontal(char left, char right);

int main(void) {
	int t;

	scanf("%d", &t);

	for (int cnt = 0; cnt < t; cnt++) {
		int r, c;
		char box[MAX_SIZE][MAX_SIZE + 1];

		scanf("%d %d", &r, &c);
		while (getchar() != '\n');

		for (int i = 0; i < r; i++)
			scanf("%s", box[i]);

		int candy = 0;
		for (int i = 0; i < r; i++)
			for (int j = 0; j < c; j++)
				if (box[i][j] == 'o') {
					if ((i - 1 >= 0 && i + 1 < r) && isVertical(box[i - 1][j], box[i + 1][j]))
						candy++;
					else if ((j - 1 >= 0 && j + 1 < c) && isHorizontal(box[i][j - 1], box[i][j + 1]))
						candy++;
				}

		printf("%d\n", candy);
	}

	return 0;
}


int isVertical(char upper, char lower) {
	if (upper == 'v' && lower == '^')
		return 1;
	return 0;
}

int isHorizontal(char left, char right) {
	if (left == '>' && right == '<')
		return 1;
	return 0;
}