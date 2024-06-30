#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 50

int main() {
	int streak = 0, longestStreak = 0;
	int n;

	scanf("%d", &n);

	for (int i = 0, solve; i < n; i++) {
		scanf("%d", &solve);
		if (solve)
			streak++;
		else {
			if (streak > longestStreak)
				longestStreak = streak;
			streak = 0;
		}
	}

	if (streak > longestStreak)
		longestStreak = streak;

	printf("%d\n", longestStreak);

	return 0;
}