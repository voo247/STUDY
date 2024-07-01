#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int WhatFloorIsTheRoomOn(long long int num) {
	int floor = 1;
	for (long long int i = 1; num >= i * 2; i *= 2, floor++);

	return floor;
}

long long int WhatIsTheRoomNumber(int floor, long long int num) {
	long long int tmp = 1;
	for (int i = 0; i < floor - 1; i++)
		tmp *= 2;

	return (num % tmp + 1);
}

int main() {
	int t;
	scanf("%d", &t);

	for (int cnt = 0; cnt < t; cnt++) {
		long long int n;
		scanf("%lld", &n);


		int floor = WhatFloorIsTheRoomOn(n);
		long long int roomNum = WhatIsTheRoomNumber(floor, n);

		for (; floor > 0; floor--, roomNum = (roomNum + 1) / 2) {
			if (roomNum < 1) roomNum = 1;

			printf("%d", floor);
			int len = 0;
			for (long long int i = roomNum; i > 0; i /= 10, len++);
			for (int i = 0; i < 18 - len; i++) printf("0");
			printf("%lld\n", roomNum);
		}
	}

	return 0;
}