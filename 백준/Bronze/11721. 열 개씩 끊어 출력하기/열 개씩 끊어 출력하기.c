#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 101

int main() {
	char n[SIZE] = { '\0' };

	scanf("%s", n);
	for (int i = 0; n[i] != '\0'; i++) {
		printf("%c", n[i]);
		if ((i + 1) % 10 == 0)
			printf("\n");
	}
	
	return 0;
}