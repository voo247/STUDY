#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char ab[5] = { '\0' };

	scanf("%s", ab);
	
	int a = 0, b = 0;
	
	int tmp = 0;
	for (int i = 0; i < 2; i++)
		if (ab[i] == '0') {
			tmp = i;
			break;
		}

	for (int i = 0; i < tmp + 1; i++)
		a = a * 10 + ab[i] - '0';
	for (int i = tmp + 1; ab[i] != '\0'; i++)
		b = b * 10 + ab[i] - '0';

	printf("%d", a + b);

	return 0;
}