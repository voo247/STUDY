#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

#define MAX_VALUE 641

int main() {
	int n, minWriter = 1;
	int tmp = 0;
	char str[5001];
	char* pStr = str;

	scanf("%d %s", &n, str);
	
	while (*pStr != '\0') {
		tmp = tmp * 10 + (*pStr - '0');
		if (tmp > MAX_VALUE) {
			minWriter++;
			tmp = 0;
			continue;
		}
		else if (tmp == 0) {
			pStr--;
			continue;
		}
		pStr++;
	}

	printf("%d\n", minWriter);

	return 0;
}