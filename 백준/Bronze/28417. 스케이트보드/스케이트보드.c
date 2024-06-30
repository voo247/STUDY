#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 100000

int run[SIZE][2];
int trick[SIZE][5];

int main() {
	int n;
	int bestScore = -999;

	scanf("%d", &n);

	for(int i = 0; i < n; i++) {
		int run_max_score;
		int first = -999, second = -999;

		for (int j = 0; j < 2; j++)
			scanf("%d", &run[i][j]);

		if (run[i][0] >= run[i][1])
			run_max_score = run[i][0];
		else
			run_max_score = run[i][1];
		
		for (int j = 0; j < 5; j++)
			scanf("%d", &trick[i][j]);

		for (int j = 0; j < 5; j++)
			for (int k = j; k < 5; k++)
				if (trick[i][j] < trick[i][k]) {
					int temp = trick[i][j];
					trick[i][j] = trick[i][k];
					trick[i][k] = temp;
				}

		int tmp = run_max_score + trick[i][0] + trick[i][1];

		if (bestScore < tmp)
			bestScore = tmp;
	}

	printf("%d\n", bestScore);

	return 0;
}