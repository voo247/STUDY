#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int day, month, year;

	while (1) {
		int sum = 0;
		int daysCnt[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

		scanf("%d %d %d", &day, &month, &year);

		if (day == 0 && month == 0 && year == 0) break;

		if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))	//윤년 감안
			daysCnt[1]++;

		for (int i = 0; i + 1 < month; i++)	//달 계산
			sum += daysCnt[i];

		sum += day;	//일 계산

		printf("%d\n", sum);
	}

	return 0;
}