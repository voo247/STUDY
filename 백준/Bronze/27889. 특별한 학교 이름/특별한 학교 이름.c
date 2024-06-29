#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char initial[5];
	scanf("%s", initial);

	if (!strcmp(initial, "NLCS"))
		printf("North London Collegiate School\n");
	else if (!strcmp(initial, "BHA"))
		printf("Branksome Hall Asia\n");
	else if (!strcmp(initial, "KIS"))
		printf("Korea International School\n");
	else if (!strcmp(initial, "SJA"))
		printf("St. Johnsbury Academy\n");

	return 0;
}