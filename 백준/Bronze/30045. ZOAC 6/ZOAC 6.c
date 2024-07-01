#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

OIor01in(char str[]) {
	for (int i = 0; str[i] != '\0'; i++)
		if (str[i] == '0') {
			if (str[i + 1] == '1')
				return 1;
		}
		else if (str[i] == 'O') {
			if (str[i + 1] == 'I')
				return 1;
		}

	return 0;
}

int main() {
	int n;
	int imoji = 0;

	scanf("%d", &n);
	
	for (int i = 0; i < n; i++) {
		char str[501];
		scanf("%s", str);

		if (OIor01in(str))
			imoji++;
	}

	printf("%d\n", imoji);

	return 0;
}