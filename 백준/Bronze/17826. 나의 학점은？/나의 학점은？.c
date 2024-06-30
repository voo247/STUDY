#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 50

int whatIsHongiksRank(int score[], int hong) {
	for (int i = 0; i < SIZE; i++)
		if (score[i] == hong)
			return i + 1;
}

int main() {
	int hongikScore;
	int score[SIZE] = { 0 };

	for (int i = 0; i < SIZE; i++)
		scanf("%d", &score[i]);
	scanf("%d", &hongikScore);

	int rank = whatIsHongiksRank(score, hongikScore);
	char grade[7][3] = { "A+", "A0", "B+", "B0", "C+", "C0", "F" };
	int gradeIndex;
	if (rank <= 5) gradeIndex = 0;
	else if (rank <= 15) gradeIndex = 1;
	else if (rank <= 30) gradeIndex = 2;
	else if (rank <= 35) gradeIndex = 3;
	else if (rank <= 45) gradeIndex = 4;
	else if (rank <= 48) gradeIndex = 5;
	else gradeIndex = 6;
		
	printf("%s\n", grade[gradeIndex]);

	return 0;
}