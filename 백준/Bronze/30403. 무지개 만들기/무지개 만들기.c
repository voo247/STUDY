#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int is_rainbow(int color[], int size) {
	for (int i = 0; i < size; i++)
		if (color[i] == 0)
			return 0;
	return 1;
}

int main(void) {
	int n;
	char str[101];
	int roygbiv[7] = { 0 };
	int largeRoygbiv[7] = { 0 };

	scanf("%d", &n);
	scanf("%s", str);

	for (int i = 0; i < n; i++)
		switch (str[i]) {
		case 'r':
			roygbiv[0]++;
			break;
		case 'o':
			roygbiv[1]++;
			break;
		case 'y':
			roygbiv[2]++;
			break;
		case 'g':
			roygbiv[3]++;
			break;
		case 'b':
			roygbiv[4]++;
			break;
		case 'i':
			roygbiv[5]++;
			break;
		case 'v':
			roygbiv[6]++;
			break;
		case 'R':
			largeRoygbiv[0]++;
			break;
		case 'O':
			largeRoygbiv[1]++;
			break;
		case 'Y':
			largeRoygbiv[2]++;
			break;
		case 'G':
			largeRoygbiv[3]++;
			break;
		case 'B':
			largeRoygbiv[4]++;
			break;
		case 'I':
			largeRoygbiv[5]++;
			break;
		case 'V':
			largeRoygbiv[6]++;
			break;
		default:
			continue;
		}

	int small = is_rainbow(roygbiv, 7);
	int large = is_rainbow(largeRoygbiv, 7);

	if (small && large)
		printf("YeS");
	else if (small && !large)
		printf("yes");
	else if (!small && large)
		printf("YES");
	else if (!small && !large)
		printf("NO!");

	return 0;
}