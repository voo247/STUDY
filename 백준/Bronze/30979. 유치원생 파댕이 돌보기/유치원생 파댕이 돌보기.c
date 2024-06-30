#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int minute, candyCnt;

	scanf("%d %d", &minute, &candyCnt);

	for (int i = 0; i < candyCnt; i++) {
		int taste;
		scanf("%d", &taste);

		minute -= taste;
	}

	if (minute <= 0)
		printf("Padaeng_i Happy\n");
	else
		printf("Padaeng_i Cry\n");

	return 0;
}