#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	int number[10] = { 0 };
	int set = 0;

	scanf("%d", &n);
	
	while (n > 0) {
		number[n % 10]++;
		n /= 10;
	}

	for (int i = 0; i < 10; i++)
		if (i == 6 || i == 9)
			continue;
		else if (set < number[i])
			set = number[i];

	if (set < (number[6] + number[9] + 1) / 2)
		set = (number[6] + number[9] + 1) / 2;

	printf("%d", set);

	return 0;
}