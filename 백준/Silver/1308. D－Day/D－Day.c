#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int isLeapYear(int y) {
	if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
		return 1;
	else
		return 0;
}

int calcPassedDay(int y, int m, int d) {
	int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int passed = 0;

	if (isLeapYear(y)) days[1]++;

	for (int i = 0; i < m - 1; i++)
		passed += days[i];
	passed += d;

	return passed;
}

int main() {
	int y, m, d;
	int dy, dm, dd;
	int d_day = 0;

	scanf("%d %d %d", &y, &m, &d);
	scanf("%d %d %d", &dy, &dm, &dd);

	if (dy > y + 1000 || (dy == y + 1000 && (dm > m || (dm == m && dd >= d)))) {
		printf("gg\n");
	}
	else {
		for (int i = y; i < dy; i++) {
			d_day += 365;
			if (isLeapYear(i)) d_day++;
		}

		d_day += calcPassedDay(dy, dm, dd);
		d_day -= calcPassedDay(y, m, d);

		printf("D-%d\n", d_day);
	}

	return 0;
}