#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, k;
	int score[1000] = { 0 };

	scanf("%d %d", &n, &k);

	for (int i = 0; i < n; i++)
		scanf("%d", &score[i]);

	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++)
			if (score[i] < score[j]) {
				int tmp = score[i];
				score[i] = score[j];
				score[j] = tmp;
			}

	printf("%d\n", score[k - 1]);

	return 0;
}