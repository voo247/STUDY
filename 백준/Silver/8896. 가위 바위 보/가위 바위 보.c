#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 31

int whoIsWin(char round[10][SIZE], char rsp, int robot, int j, int player) {
	for (int i = 0; i < robot; i++) {
		if (round[i][0] == '\0') continue;

		if (round[i][j] == rsp);
		else {
			round[i][0] = '\0';
			player--;
		}
	}

	return player;
}

int main() {
	int t;

	scanf("%d", &t);

	for (int i = 0; i < t; i++) {
		int robot;
		char round[10][SIZE] = { '\0' };

		scanf("%d", &robot);
		getchar();

		for (int j = 0; j < robot; j++)
			scanf("%s", round[j]);

		int player = robot;
		int winner = 0;

		for (int j = 0; round[0][j] != '\0'; j++) {
			int rock = 0, scissors = 0, paper = 0;
			int k = 0;
			for (; k < robot; k++) {
				if (round[k][0] == '\0')
					continue;

				switch (round[k][j]) {
				case 'R':
					rock++;
					break;
				case 'S':
					scissors++;
					break;
				case 'P':
					paper++;
					break;
				}

				if (rock > 0 && scissors > 0 && paper > 0)
					break;
			}

			if (k < robot)
				continue;
			else if (rock == 0 && scissors > 0 && paper > 0)
				player = whoIsWin(round, 'S', robot, j, player);
			else if (rock > 0 && scissors == 0 && paper > 0)
				player = whoIsWin(round, 'P', robot, j, player);
			else if (rock > 0 && scissors > 0 && paper == 0)
				player = whoIsWin(round, 'R', robot, j, player);

			if (player == 1) {
				for (int k = 0; k < robot; k++)
					if (round[k][0] != '\0') {
						winner = k + 1;
						break;
					}
				break;
			}


		}

		printf("%d\n", winner);
	}

	return 0;
}