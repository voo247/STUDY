#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, u, l;
	scanf("%d %d %d", &n, &u, &l);

	if ((u >= 8000 || l >= 260) && n >= 1000)
		printf("Very Good");
	else if(n >= 1000)
		printf("Good");
	else
		printf("Bad");

	return 0;
}