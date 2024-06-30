#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int hungyuGoTo(char word, char position);

int main() {
	char position;
	char word[] = "ILOVEYONSEI";

	scanf("%c", &position);

	int movement = 0;
	for (int i = 0; word[i] != '\0'; i++) {
		movement += hungyuGoTo(word[i], position);
		position = word[i];
	}

	printf("%d\n", movement);

	return 0;
}

int hungyuGoTo(char word, char position) {
	if (word == position) return 0;
	else if (word < position) return position - word;
	else if (word > position) return word - position;
}