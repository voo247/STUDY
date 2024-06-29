#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 101

int main() {
	char word[SIZE];

	scanf("%s", word);

	for (int i = 0; word[i] != '\0'; i++)
		if (word[i] >= 'A' && word[i] <= 'Z')
			word[i] = word[i] - 'A' + 'a';
		else if (word[i] >= 'a' && word[i] <= 'z')
			word[i] = word[i] - 'a' + 'A';

	printf("%s\n", word);
}