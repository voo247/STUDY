#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int startH, startM;
	int endH, endM;
	int n, t;

	scanf("%d:%d %d:%d", &startH, &startM, &endH, &endM);
	scanf("%d %d", &n, &t);

	int workMin = endM - startM + (endH - startH) * 60;
	int today = workMin / t;	//하루당 옮길 수 있는 박스
	if (workMin % t == 0 && today > 0) today--;

	int days = 0;
	for(int tmp = n + 1; tmp > today; tmp -= today)
		days++;

	int timeM = startM + (n + 1 - days * today) * t;
	int timeH = startH;
	if (timeM >= 60) {
		timeH += (timeM / 60);
		timeM %= 60;
	}

	printf("%d\n", days);
	printf("%02d:%02d\n", timeH, timeM);

	return 0;
}