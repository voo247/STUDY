#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 6

int main() {
	char str[SIZE];
	int sum = 0;

	scanf("%s", str);

	for (int i = 0; str[i] != '\0'; i++) {
		int tmp = 1;
		for (int j = 0; j < 5; j++)
			tmp *= (str[i] - '0');
		sum += tmp;
	}
	
	printf("%d\n", sum);

	return 0;
}