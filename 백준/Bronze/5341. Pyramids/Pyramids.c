#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;

	scanf("%d", &n);
	
	while (n != 0) {
		int sum = 0;

		for (int i = n; i > 0; i--)
			sum += i;
		
		printf("%d\n", sum);

		scanf("%d", &n);
	}

	return 0;
}