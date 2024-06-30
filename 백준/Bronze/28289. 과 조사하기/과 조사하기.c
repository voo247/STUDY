#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAX_CLUB 4

typedef struct {
	int grade, classNum, number;
} StudentInfo;

int main() {
	int n;
	int member[MAX_CLUB] = { 0 };

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		StudentInfo student;

		scanf("%d %d %d", &student.grade, &student.classNum, &student.number);

		if (student.grade == 1)
			member[3]++;
		else if (student.classNum <= 2)
			member[0]++;
		else if (student.classNum == 3)
			member[1]++;
		else if (student.classNum == 4)
			member[2]++;
	}

	for (int i = 0; i < MAX_CLUB; i++)
		printf("%d\n", member[i]);

	return 0;
}