#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int findLongestStreak(int a, int b) {
	if (a > b)
		return a;
	else
		return b;
}

int main() {
	int longestStreak = 0;
	int streak = 0, lastUsedFreezeItem = -999;
	int n;

	scanf("%d", &n);
	
	for (int i = 0, used = 0; i < n; i++) {
		int solved;
		scanf("%d", &solved);
			
		if (!solved) {
			if (i >= lastUsedFreezeItem + 2) {
				lastUsedFreezeItem = i;
				continue;
			}
			else {
				longestStreak = findLongestStreak(streak, longestStreak);
				streak = 0;
			}
		}
		else
			streak++;
	}

	longestStreak = findLongestStreak(streak, longestStreak);

	printf("%d\n", longestStreak);

	return 0;
}