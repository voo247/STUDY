#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

typedef struct {
	int distance;
	int rank;
} TeamInfo;

int main() {
	int r, c;
	char str[50][51];
	TeamInfo team[9] = { 0 };

	scanf("%d %d", &r, &c);
	getchar();

	for (int i = 0; i < r; i++)
		scanf("%s", str[i]);

	for (int i = 0; i < r; i++) {
		int teamNum = -1;

		for (int j = 0; j < c || str[i][j] != '\0'; j++)
			if (str[i][j] == 'S' || (teamNum == -1 && str[i][j] == '.'))
				continue;
			else if (str[i][j] == 'F')
				break;
			else if (teamNum == -1 && isdigit(str[i][j]))
				teamNum = str[i][j] - '0' - 1;
			else if (teamNum != -1 && str[i][j] == '.')
				team[teamNum].distance++;
	}

	for (int i = 0, rank = 1, notRank = 9; i < 50 && notRank > 0; i++) {
		int check = 0;
		for (int j = 0; j < 9; j++)
			if (team[j].distance == i) {
				team[j].rank = rank;
				check++;
                notRank--;
			}
		if (check)
			rank++;
	}

	for (int i = 0; i < 9; i++)
		printf("%d\n", team[i].rank);

	return 0;
}