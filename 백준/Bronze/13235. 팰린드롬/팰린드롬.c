#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char str[21];
	scanf("%s", str);

	int len = 0;
	for (; str[len] != '\0'; len++);

	int is_palindrome = 0;
	for(int i = 0; i < len / 2; i++)
		if (str[i] != str[len - 1 - i]) {
			is_palindrome = -1;
			break;
		}

	if(is_palindrome == 0)
		printf("true\n");
	else
		printf("false\n");

	return 0;
}