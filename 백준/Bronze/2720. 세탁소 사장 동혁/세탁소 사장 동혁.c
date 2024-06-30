#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int T;

	scanf("%d", &T);

	for (int i = 0; i < T; i++) {
		int cent;
        
		scanf("%d", &cent);

		int quarter = cent / 25;
		int dime = cent % 25 / 10;
		int nickel = cent % 25 % 10 / 5;
		int penny = cent % 5;

		printf("%d %d %d %d\n", quarter, dime, nickel, penny);
	}

	return 0;
}