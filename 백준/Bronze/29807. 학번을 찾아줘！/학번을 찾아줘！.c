#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 50

int main() {
	int score[5] = { 0 };
	int n;

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &score[i]);
		if (!score[i]) break;
	}
	
	long long int studentNum = 0;

	if (score[0] > score[2])
		studentNum = studentNum + (score[0] - score[2]) * 508;
	else
		studentNum = studentNum + (score[2] - score[0]) * 108;
	if (score[1] > score[3])
		studentNum = studentNum + (score[1] - score[3]) * 212;
	else
		studentNum = studentNum + (score[3] - score[1]) * 305;
	if (n == 5)
		studentNum = studentNum + score[4] * 707;

	studentNum *= 4763;
		
	printf("%d\n", studentNum);

	return 0;
}