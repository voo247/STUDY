#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	int t;
	scanf("%d", &t);

	for (int i = 0; i < t; i++) {
		int year;
		scanf("%d", &year);

		int trigger = (year + 1) % (year / 10 % 10 * 10 + year % 10) == 0 ? 1 : 0;

		if (trigger)
			printf("Good\n");
		else
			printf("Bye\n");
	}

	return 0;
}