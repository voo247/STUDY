#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, useable_cnt = 0;
	int presentYear, presentMonth, presentDay;

	scanf("%d-%d-%d", &presentYear, &presentMonth, &presentDay);
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		int year, month, day;
		scanf("%d-%d-%d", &year, &month, &day);

		if (presentYear < year)
			useable_cnt++;
		else if (presentYear == year)
			if (presentMonth < month)
				useable_cnt++;
			else if (presentMonth == month && presentDay <= day)
				useable_cnt++;
	}

	printf("%d", useable_cnt);

	return 0;
}