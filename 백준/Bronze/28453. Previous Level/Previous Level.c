#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int level;
		scanf("%d", &level);
		if (level < 250)
			printf("4 ");
		else if (level < 275)
			printf("3 ");
		else if (level < 300)
			printf("2 ");
		else if (level == 300)
			printf("1 ");
	}

	return 0;
}