#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

char nation[8][13] = { "botswana", "ethiopia", "kenya", "namibia", "south-africa", "tanzania", "zambia", "zimbabwe"};

int alreadyVisited(char tour[8][13], int tourIndex, int visited) {
	for (int i = 0; i < tourIndex; i++)
		if (!strcmp(tour[i], nation[visited]))
			return 1;
	return 0;
}

int main() {
	char tour[8][13];
	int n;
	int total = 0;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {

		scanf("%s", tour[i]);

		if (!strcmp(tour[i], nation[0])) {	//보츠와나
			// total += 0;
		}
		else if (!strcmp(tour[i], nation[1])) {	//에티오피아
			total += 50;
		}
		else if (!strcmp(tour[i], nation[2])) {	//케냐
			total += 50;
		}
		else if (!strcmp(tour[i], nation[3])) {	//나미비아
			if (alreadyVisited(&tour, i, 4)) total += 40;
			else total += 140;
		}
		else if (!strcmp(tour[i], nation[4])) {	//남아프리카공화국
			// total += 0;
		}
		else if (!strcmp(tour[i], nation[5])) {	//탄자니아
			total += 50;
		}
		else if (!strcmp(tour[i], nation[6])) {	//잠비아
			if (i > 1 && !strcmp(tour[i - 1], nation[7])) total += 20;
			else total += 50;
		}
		else if (!strcmp(tour[i], nation[7])) {	//짐바브웨
			if (i > 1 && !strcmp(tour[i - 1], nation[6])) total += 0;
			else total += 30;
		}
	}

	printf("%d\n", total);

	return 0;
}