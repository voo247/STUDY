#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 8

int main() {
	int score = 0;

	for (int i = 0; i < SIZE; i++) {
		char piece[9];

		scanf("%s", piece);

		for (int j = 0; piece[j] != '\0'; j++) {
			int pieceScore = 1;
			switch (piece[j]) {
			case '.':
			case 'k':
			case 'K':
				pieceScore = 0;
				break;
			case 'p':
				pieceScore = -1;
			case 'P':
				pieceScore *= 1;
				break;
			case 'n':
			case 'b':
				pieceScore = -1;
			case 'N':
			case 'B':
				pieceScore *= 3;
				break;
			case 'r':
				pieceScore = -1;
			case 'R':
				pieceScore *= 5;
				break;
			case 'q':
				pieceScore = -1;
			case 'Q':
				pieceScore *= 9;
				break;
			}

			score += pieceScore;
		}
	}
	
	printf("%d\n", score);

	return 0;
}