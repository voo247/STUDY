#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	char monthName[12][10] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };

	char Month[10];
	int D, Y, H, M;

	scanf("%s %d, %d %d:%d", Month, &D, &Y, &H, &M);
	
	if (Y % 400 == 0 || (Y % 4 == 0 && Y % 100 != 0)) days[1]++;	//윤년처리

	int totalMin = 0;
	for (int i = 0; i < 12; i++)
		totalMin += (days[i] * 24 * 60);

	int restDay = 0, restMin;
	for(int i = 0; i < 12; i++)
		if (!strcmp(Month, monthName[i])) {
			for (int j = 0; j < i; j++)
				restDay += days[j];
			restDay += (D - 1);
			break;
		}

	restMin = restDay * 24 * 60;
	restMin += (H * 60 + M);

	printf("%.15lf\n", ((double)restMin / totalMin) * 100);

	return 0;
}