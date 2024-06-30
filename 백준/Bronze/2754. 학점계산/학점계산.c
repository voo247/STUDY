#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char grade[3];
	double score = 0;

	scanf("%s", grade);

	if (grade[0] == 'A') score = 4.0;
	else if (grade[0] == 'B') score = 3.0;
	else if (grade[0] == 'C') score = 2.0;
	else if (grade[0] == 'D') score = 1.0;
	else if (grade[0] == 'F') score = 0.0;

	if (grade[1] == '+') score += 0.3;
	else if (grade[1] == '-') score -= 0.3;

	printf("%.1f\n", score);
}