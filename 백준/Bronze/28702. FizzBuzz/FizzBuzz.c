#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char str[3][9];

	for (int i = 0; i < 3; i++)
		scanf("%s", str[i]);

	int answer = 0;
	for (int i = 0; i < 3; i++)
		if (strcmp(str[i], "FizzBuzz") == 0);
		else if (strcmp(str[i], "Fizz") == 0);
		else if (strcmp(str[i], "Buzz") == 0);
		else {
			int j;
			for (j = 0; str[i][j] != '\0'; j++)
				answer = answer * 10 + str[i][j] - '0';
			answer = answer + (3 - i);
			break;
		}

	if(answer % 5 == 0 && answer % 3 == 0)
		printf("%s\n", "FizzBuzz");
	else if(answer % 5 == 0)
		printf("%s\n", "Buzz");
	else if(answer % 3 == 0)
		printf("%s\n", "Fizz");
	else
		printf("%d\n", answer);

	return 0;
}