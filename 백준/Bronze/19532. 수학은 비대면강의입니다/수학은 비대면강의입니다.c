#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b, c, d, e, f;
	scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);

	//1번식에 *d, 2번 식에 *a를 해서 첫 항을 adx로 통일, 가감법 사용
	
	int tmp = b * d - e * a;
	if (tmp == 0) tmp = 1;
	int y = (c * d - f * a) / tmp;

	int x;
	if (a != 0) x = (c - b * y) / a;
	else x = (f - e * y) / d;

	printf("%d %d\n", x, y);

	return 0;
}