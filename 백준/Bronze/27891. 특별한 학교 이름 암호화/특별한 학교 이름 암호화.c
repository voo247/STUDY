#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int decode(char* sentence) {
	for (int i = 0; i < 26; i++) {
		for (int j = 0; *(sentence + j) != '\0'; j++)
			if (*(sentence + j) != 'z')
				(*(sentence + j))++;
			else
				*(sentence + j) = 'a';

		if (!strcmp(sentence, "northlondo"))
			return 1;
		else if (!strcmp(sentence, "branksomeh"))
			return 2;
		else if (!strcmp(sentence, "koreainter"))
			return 3;
		else if (!strcmp(sentence, "stjohnsbur"))
			return 4;
	}
	
	return 0;
}

int main() {
	const char initial[][6] = { "ERROR", "NLCS", "BHA", "KIS", "SJA" };
	char sentence[11];

	scanf("%s", sentence);

	int shortenNumber = decode(&sentence);

	printf("%s", initial[shortenNumber]);

	return 0;
}