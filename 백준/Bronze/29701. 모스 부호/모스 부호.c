#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char decodingTheWord(char encodingWord[]) {
	int codeNum = 0;
	char word;
	for (int i = 0; encodingWord[i] != '\0'; i++)
		if (encodingWord[i] == '.')
			codeNum = codeNum * 10 + 1;
		else if(encodingWord[i] == '-')
			codeNum = codeNum * 10 + 2;

	switch (codeNum) {
	case 12: return 'A';
	case 2111: return 'B';
	case 2121: return 'C';
	case 211: return 'D';
	case 1: return 'E';
	case 1121: return 'F';
	case 221: return 'G';
	case 1111: return 'H';
	case 11: return 'I';
	case 1222: return 'J';
	case 212: return 'K';
	case 1211: return 'L';
	case 22: return 'M';
	case 21: return 'N';
	case 222: return 'O';
	case 1221: return 'P';
	case 2212: return 'Q';
	case 121: return 'R';
	case 111: return 'S';
	case 2: return 'T';
	case 112: return 'U';
	case 1112: return 'V';
	case 122: return 'W';
	case 2112: return 'X';
	case 2122: return 'Y';
	case 2211: return 'Z';
	case 12222: return '1';
	case 11222: return '2';
	case 11122: return '3';
	case 11112: return '4';
	case 11111: return '5';
	case 21111: return '6';
	case 22111: return '7';
	case 22211: return '8';
	case 22221: return '9';
	case 22222: return '0';
	case 221122: return ',';
	case 121212: return '.';
	case 112211: return '?';
	case 222111: return ':';
	case 211112: return '-';
	case 122121: return '@';
	}
}

int main() {
	int n;
	char word[101] = { '\n' };

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		char morseWord[10];
		scanf("%s", morseWord);

		word[i] = decodingTheWord(morseWord);
	}

	printf("%s", word);

	return 0;
}