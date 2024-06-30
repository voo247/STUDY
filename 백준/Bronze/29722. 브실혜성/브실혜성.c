#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int year, month, day;
	int D_day;

	scanf("%d-%d-%d", &year, &month, &day);
	scanf("%d", &D_day);

	day += D_day;

	if (day > 30) {
		month += (day / 30);
		day %= 30;
		if (day == 0) {
			day = 30;
			month--;
		}
		if (month > 12) {
			year += (month / 12);
			month %= 12;
			if (month == 0) {
				month = 12;
				year--;
			}
		}
	}

	printf("%04d-%02d-%02d\n", year, month, day);

	return 0;
}