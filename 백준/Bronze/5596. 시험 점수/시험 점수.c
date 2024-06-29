#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int minkukSum = 0, mansaeSum = 0;

	for (int i = 0; i < 4; i++) {
		int tmp;

		scanf("%d", &tmp);

		minkukSum += tmp;
	}
	
	for (int i = 0; i < 4; i++) {
		int tmp;

		scanf("%d", &tmp);

		mansaeSum += tmp;
	}

	if(minkukSum >= mansaeSum)
		printf("%d\n", minkukSum);
	else
		printf("%d\n", mansaeSum);

	return 0;
}