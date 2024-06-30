#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int t;

	scanf("%d", &t);

	for (int i = 1; i <= t; i++) {
		int rank;
		char round[4][15] = { "Round 1", "Round 2", "Round 3", "World Finals" };
		int lastRound = 0;

		scanf("%d", &rank);

		if (rank <= 25) lastRound = 3;
		else if (rank <= 1000) lastRound = 2;
		else if (rank <= 4500) lastRound = 1;

		printf("Case #%d: %s\n", i, round[lastRound]);
	}

	return 0;
}