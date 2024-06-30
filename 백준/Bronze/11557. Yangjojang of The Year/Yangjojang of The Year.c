#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct {
	char name[21];
	int alcohol;
} InfoUniv;

int main() {
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		int n;
		InfoUniv sojuWhale[100];
		int highIndex = 0;

		scanf("%d", &n);

		for (int j = 0; j < n; j++) {
			scanf("%s %d", (sojuWhale + j)->name, &(sojuWhale + j)->alcohol);

			if ((sojuWhale + highIndex)->alcohol < (sojuWhale + j)->alcohol)
				highIndex = j;
		}

		printf("%s\n", (sojuWhale + highIndex)->name);
	}

	return 0;
}