#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double calcBmi(int h, int w) {
	return (double)w / ((h * 0.01) * (h * 0.01));
}

int main() {
	int n;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		int height, weight;
		
		scanf("%d %d", &height, &weight);

		double bmi = calcBmi(height, weight);

		if (height <= 140)
			printf("6\n");
		else if (height < 146)
			printf("5\n");
		else if (height < 159)
			printf("4\n");
		else if (height < 161) {
			if (16.0 <= bmi && bmi < 35.0)
				printf("3\n");
			else
				printf("4\n");
		}
		else if (height < 204) {
			if (20.0 <= bmi && bmi < 25.0)
				printf("1\n");
			else if (18.5 <= bmi && bmi < 30.0)
				printf("2\n");
			else if (16.0 <= bmi && bmi < 35.0)
				printf("3\n");
			else
				printf("4\n");
		}
		else
			printf("4\n");
	}

	return 0;
}