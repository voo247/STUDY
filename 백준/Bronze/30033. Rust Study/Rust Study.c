#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 1000

int main() {
	int n;
	int plan[SIZE], study[SIZE];
	int planComplete = 0;

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
		scanf("%d", &plan[i]);
	for (int i = 0; i < n; i++) {
		scanf("%d", &study[i]);
		if (plan[i] <= study[i])
			planComplete++;
	}

	printf("%d\n", planComplete);

	return 0;
}