#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, k;
	int grade[9] = { 4, 11, 23, 40, 60, 77, 89, 96, 100 };

	scanf("%d %d", &n, &k);

	for (int i = 0; i < k; i++) {
		int score;
		scanf("%d", &score);

		for(int j = 0; j < 9; j++)
			if ((score * 100) / n <= grade[j]) {
				printf("%d ", j + 1);
				break;
			}
	}

	return 0;
}