#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int c;

	scanf("%d", &c);

	for (int i = 0; i < c; i++) {
		int num, sum = 0;
		int score[1000] = { 0 };

		scanf("%d", &num);
		for (int i = 0; i < num; i++) {
			scanf("%d", &score[i]);
			sum += score[i];
		}

		double aver = (double)sum / num;

		int aver_up_cnt = 0;
		for (int i = 0; i < num; i++)
			if (aver < score[i])
				aver_up_cnt++;

		double percent = (double)aver_up_cnt / num * 100;
		printf("%.3lf%%\n", percent);
	}

	return 0;
}