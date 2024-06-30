#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int isEatableInTheWay(int expYear, int expMonth, int expDay);

int year, month, day;

int main() {
	int n;

	scanf("%d %d %d", &year, &month, &day);
	scanf("%d", &n);

	for (int cnt = 0; cnt < n; cnt++) {
		int expFirst, expSecond, expThird;
		scanf("%d %d %d", &expFirst, &expSecond, &expThird);

		int eastAsia = isEatableInTheWay(expFirst, expSecond, expThird);
		int mostWay = isEatableInTheWay(expThird, expSecond, expFirst);
		int anglosphere = isEatableInTheWay(expThird, expFirst, expSecond);

		if (eastAsia == -1 && mostWay == -1 && anglosphere == -1)
			printf("invalid\n");
		else if (eastAsia && mostWay && anglosphere)	//(eastAsia == 1 || eastAsia == -1) && (mostWay == 1 || mostWay == -1) && (anglosphere == 1 || anglosphere == -1)
			printf("safe\n");
		else
			printf("unsafe\n");
	}

	return 0;
}

int isEatableInTheWay(int expYear, int expMonth, int expDay) {
	int monthDays[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (expMonth == 2 && expYear % 4 == 0) monthDays[2 - 1]++;

	if (expMonth < 1 || 12 < expMonth)
		return -1;
	if (expDay < 1 || monthDays[expMonth - 1] < expDay)
		return -1;

	if (year > expYear)
		return 0;
	else if (year < expYear)
		return 1;
	else
		if (month > expMonth)
			return 0;
		else if (month < expMonth)
			return 1;
		else
			if (day > expDay)
				return 0;
			else
				return 1;
}