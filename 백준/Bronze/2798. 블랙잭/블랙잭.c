#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 100

int main() {
	int n, m;
	int card[SIZE];

	scanf("%d %d", &n, &m);

	for (int i = 0; i < n; i++)
		scanf("%d", &card[i]);

	int biggest = -999;
	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++)
			for (int k = j + 1; k < n; k++)
				if (biggest < card[i] + card[j] + card[k] && card[i] + card[j] + card[k] <= m)
					biggest = card[i] + card[j] + card[k];

	printf("%d\n", biggest);

	return 0;
}