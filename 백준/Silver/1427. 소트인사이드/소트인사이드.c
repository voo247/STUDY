#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char n[12];

	scanf("%s", n);

	for (int i = 0; n[i] != '\0'; i++)
		for (int j = i + 1; n[j] != '\0'; j++)
			if (n[i] - '0' < n[j] - '0') {
				char tmp = n[i];
				n[i] = n[j];
				n[j] = tmp;
			}

	printf("%s\n", n);

	return 0;
}