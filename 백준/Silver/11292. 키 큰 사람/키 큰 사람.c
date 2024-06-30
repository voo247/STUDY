#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct {
	double height;
	char name[11];
} Person;

int main() {
	int n;
	
	scanf("%d", &n);

	while (n != 0) {
		Person student[50];
		double maxHeight = 0.0;
		getchar();

		for (int i = 0; i < n; i++) {
			scanf("%s %lf", student[i].name, &student[i].height);
			if (maxHeight < student[i].height)
				maxHeight = student[i].height;
		}
		
		for (int i = 0; i < n; i++) {
			if (maxHeight == student[i].height)
				printf("%s ", student[i].name);
		}
		printf("\n");

		scanf("%d", &n);
	}

	return 0;
}