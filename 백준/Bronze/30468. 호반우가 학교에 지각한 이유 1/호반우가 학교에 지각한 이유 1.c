#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int stats = 0, n;
	int bless = 0;

	for (int i = 0; i < 4; i++) {
		int tmp;
		scanf("%d", &tmp);
		stats += tmp;
	}

	scanf("%d", &n);

	bless = n * 4 - stats;

	if (bless < 0) bless = 0;
	printf("%d", bless);

	return 0;
}