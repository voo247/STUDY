#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 81

int main() {
	int num;
	
	scanf("%d", &num);

	for (int i = 0; i < num; i++) {
		char ox[SIZE] = { '\0' };
		int score = 0;

		scanf("%s", ox);

		for (int i = 0, point = 1; ox[i] != '\0'; i++)
			if (ox[i] == 'O')
				score += point++;
			else
				point = 1;
		
		printf("%d\n", score);
	}
}