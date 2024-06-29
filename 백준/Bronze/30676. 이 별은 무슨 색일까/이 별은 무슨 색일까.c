#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int starlight;
	char type[][10] = { "ERROR", "Red", "Orange", "Yellow", "Green", "Blue", "Indigo", "Violet" };

	scanf("%d", &starlight);

	int index = 0;

	if (starlight < 380 || 780 < starlight);
	else if (620 <= starlight)
		index = 1;
	else if (590 <= starlight)
		index = 2;
	else if (570 <= starlight)
		index = 3;
	else if (495 <= starlight)
		index = 4;
	else if (450 <= starlight)
		index = 5;
	else if (425 <= starlight)
		index = 6;
	else if (380 <= starlight)
		index = 7;

	printf("%s\n", type[index]);

	return 0;
}