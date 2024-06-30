#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	int suminsMoney = 0;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		int width, height;

		scanf("%d %d", &width, &height);

		if (width == 136)
			suminsMoney += 1000;
		else if(width == 142)
			suminsMoney += 5000;
		else if(width == 148)
			suminsMoney += 10000;
		else if(width == 154)
			suminsMoney += 50000;
	}

	printf("%d\n", suminsMoney);

	return 0;
}