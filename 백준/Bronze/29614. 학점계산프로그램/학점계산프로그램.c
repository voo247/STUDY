#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char grade[1001];
	double score = 0;
	int cnt = 0;

	scanf("%s", grade);

	for (int i = 0; grade[i] != '\0'; i++) {
		if (grade[i] == 'A') score += 4.0;
		else if (grade[i] == 'B') score += 3.0;
		else if (grade[i] == 'C') score += 2.0;
		else if (grade[i] == 'D') score += 1.0;
		else if (grade[i] == 'F') score += 0.0;

		if (grade[i + 1] == '+') {
			score += 0.5;
			i++;
		}

		cnt++;
	}

	printf("%f", score / cnt);

	return 0;
}