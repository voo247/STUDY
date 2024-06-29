#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	char str[100000];

	scanf("%d", &n);
	getchar();

	scanf("%s", str);

	char* pStr = str + strlen(str) - 5;

	printf("%s\n", pStr);

	return 0;
}