#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	while (1) {
		char s[101] = { '\0' };
		
		if (scanf("%[^\n]d", &s) == EOF)
			break;

		printf("%s\n", s);

		getchar();
	}

	return 0;
}