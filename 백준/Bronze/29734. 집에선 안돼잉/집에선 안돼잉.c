#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define WORK_TIME 8

int main() {
	long long int n, m;
	int t, s;
	char studyAt[2][5] = { "Zip", "Dok" };

	scanf("%lld %lld", &n, &m);
	scanf("%d %d", &t, &s);

	long long int house, studyCafe;
	long long int sleep;

	//집
	sleep = n / WORK_TIME;
	if (n % WORK_TIME == 0) sleep--;
	house = n + s * sleep;

	//독
	sleep = m / WORK_TIME;
	if (m % WORK_TIME == 0) sleep--;
	studyCafe = m + s * sleep + (sleep * 2 + 1) * t;

	if (house < studyCafe)
		printf("%s\n%lld\n", studyAt[0], house);
	else
		printf("%s\n%lld\n", studyAt[1], studyCafe);

	return 0;
}