#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int compareTheDateAndDeadline(int deadline[], int date[]) {
	if (deadline[0] == date[0])
		return deadline[1] - date[1];
	else  if ((deadline[0] < date[0] && !(date[0] == 12 && deadline[0] == 1)) || (deadline[0] == 12 && date[0] == 1)) { //마감보다 제출이 늦음
		int monthDays[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
		if(deadline[0] == 2 && (deadline[2] % 4 == 0 && (deadline[2] % 100 != 0 || deadline[2] % 400 == 0))) monthDays[2 - 1]++;
		if (deadline[0] == 12 && date[0] == 1) deadline[2]++;
		return deadline[1] - (date[1] + monthDays[deadline[0] - 1]);
	}
	else if (date[0] < deadline[0] || (date[0] == 12 && deadline[0] == 1)) {	//마감보다 제출이 빠름
		int monthDays[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
		if (date[0] == 2 && (deadline[2] % 4 == 0 && (deadline[2] % 100 != 0 || deadline[2] % 400 == 0))) monthDays[2 - 1]++;
		if (date[0] == 12 && deadline[0] == 1) deadline[2]--;
		return (deadline[1] + monthDays[date[0] - 1]) - date[1];
	}
}

int main() {
	int n;
	scanf("%d", &n);

	for (int cnt = 0; cnt < n; cnt++) {
		int deadline[3], date[2];

		scanf("%d/%d/%d %d/%d", &deadline[0], &deadline[1], &deadline[2], &date[0], &date[1]);
		
		if (deadline[0] == date[0] && deadline[1] == date[1])
			printf("SAME DAY\n");
		else {
			int days = compareTheDateAndDeadline(deadline, date);
			
			if (0 < days && days <= 7) {
				printf("%d/%d/%d IS %d DAY", date[0], date[1], deadline[2], days);
				if (days != 1) printf("S");
				printf(" PRIOR\n");
			}
			else if(days < 0 && -7 <= days){
				printf("%d/%d/%d IS %d DAY", date[0], date[1], deadline[2], days * -1);
				if (days * -1 != 1) printf("S");
				printf(" AFTER\n");
			}
			else
				printf("OUT OF RANGE\n");
		}
	}

	return 0;
}