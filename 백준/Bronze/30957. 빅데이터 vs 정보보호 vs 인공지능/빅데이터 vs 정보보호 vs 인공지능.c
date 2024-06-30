#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	int bsa[3] = { 0 };

	scanf("%d", &n);
	getchar();

	for (int i = 0; i < n; i++) {
		char preference;

		scanf("%c", &preference);

		if (preference == 'B')
			bsa[0]++;
		else if (preference == 'S')
			bsa[1]++;
		else if (preference == 'A')
			bsa[2]++;
	}

	int maxValue = 0;
	for (int i = 0; i < 3; i++)
		if (maxValue < bsa[i])
			maxValue = bsa[i];

	if (bsa[0] == bsa[1] && bsa[1] == bsa[2])
		printf("%s", "SCU");
	else {
		if (bsa[0] == maxValue)
			printf("%c", 'B');
		if (bsa[1] == maxValue)
			printf("%c", 'S');
		if (bsa[2] == maxValue)
			printf("%c", 'A');
	}

	return 0;
}