#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int money;

	scanf("%d", &money);

	int first = money * 0.78;
int second = (money * 0.80) + (money * 0.20 * 0.78);
	printf("%d %d", first, second);

	return 0;
}