#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int game;

	scanf("%d", &game);

	for (int i = 0; i < game; i++) {
		long long int money = 0, mission[100][3] = { 0 };
		int cnt;

		scanf("%d", &cnt);

		for (int j = 0; j < cnt; j++)
			for (int k = 0; k < 3; k++)
				scanf("%lld", &mission[j][k]);
		
		int kill, death, assist;
		scanf("%d %d %d", &kill, &death, &assist);

		for (int j = 0; j < cnt; j++) {
			long long int tmp = (kill * mission[j][0]) - (death * mission[j][1]) + (assist * mission[j][2]);
			if (tmp > 0) money += tmp;
		}

		printf("%lld\n", money);
	}

	return 0;
}