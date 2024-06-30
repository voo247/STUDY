#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 100

int main() {
	int white[SIZE][SIZE] = { 0 };
	int num, black = 0;
	
	scanf("%d", &num);
	for (int i = 0; i < num; i++) {
		int x, y;
		scanf("%d %d", &x, &y);

		for (int j = 0; j < 10; j++)
			for (int k = 0; k < 10; k++)
				white[x + j][y + k] = 1;
	}
	
	for (int i = 0; i < SIZE; i++)
		for (int j = 0; j < SIZE; j++)
			black += white[i][j];

	printf("%d", black);

	return 0;
}