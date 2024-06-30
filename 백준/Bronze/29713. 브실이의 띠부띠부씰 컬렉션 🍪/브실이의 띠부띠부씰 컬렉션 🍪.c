#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define alphabetToIndex 'A'

int main() {
	int n;
	int alphabet_cnt[26] = { 0 };

	scanf("%d", &n);
	getchar();

	for (int i = 0; i < n; i++) {
		char alphabet;

		scanf("%c", &alphabet);

		alphabet_cnt[alphabet - alphabetToIndex]++;
	}

	int ddibuddibu = 0;
	while (1) {
		if (--alphabet_cnt['B' - alphabetToIndex] < 0) break;
		if (--alphabet_cnt['R' - alphabetToIndex] < 0) break;
		if (--alphabet_cnt['O' - alphabetToIndex] < 0) break;
		if (--alphabet_cnt['N' - alphabetToIndex] < 0) break;
		if (--alphabet_cnt['Z' - alphabetToIndex] < 0) break;
		if (--alphabet_cnt['E' - alphabetToIndex] < 0) break;
		if (--alphabet_cnt['S' - alphabetToIndex] < 0) break;
		if (--alphabet_cnt['I' - alphabetToIndex] < 0) break;
		if (--alphabet_cnt['L' - alphabetToIndex] < 0) break;
		if (--alphabet_cnt['V' - alphabetToIndex] < 0) break;
		if (--alphabet_cnt['E' - alphabetToIndex] < 0) break;
		if (--alphabet_cnt['R' - alphabetToIndex] < 0) break;

		ddibuddibu++;
	}

	printf("%d\n", ddibuddibu);

	return 0;
}