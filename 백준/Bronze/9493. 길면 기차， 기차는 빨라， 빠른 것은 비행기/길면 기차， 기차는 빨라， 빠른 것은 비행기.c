#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printTheTime(int hours, int slow, int fast) {
	double hour = ((double)hours / slow) - ((double)hours / fast);
	double min = (((double)hours / slow) - ((double)hours / fast)) * 60;
	double sec = (((double)hours / slow) - ((double)hours / fast)) * 60 * 60 + 0.5;

	printf("%d:%02d:%02d\n", (int)hour, (int)min % 60, (int)sec % 60);
}

int main() {
	while (1) {
		int m, a, b;

		scanf("%d %d %d", &m, &a, &b);

		if (m == 0 && a == 0 && b == 0)
			return 0;

		if (a <= b)
			printTheTime(m, a, b);
		else if (a > b)
			printTheTime(m, b, a);
	}
}