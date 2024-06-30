#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	int cute = 0, notCute = 0;

	scanf("%d", &n);

	for (int i = 0, tmp; i < n; i++) {
		scanf("%d", &tmp);

		if (tmp) cute++;
		else notCute++;
	}

	if(cute > notCute)
		printf("Junhee is cute!\n");
	else
		printf("Junhee is not cute!\n");

	return 0;
}