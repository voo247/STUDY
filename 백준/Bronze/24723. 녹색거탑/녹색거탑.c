#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	int alterable = 1;
	
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
		alterable *= 2;
		
	printf("%d ", alterable);

	return 0;
}