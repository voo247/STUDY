#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int catType = 0;
	for (int i = 0; i < 15; i++)
		for (int j = 0; j < 15; j++) {
			char word;
			scanf("%s", &word);
			switch (word) {
			case 'w':
				catType = 1;
				break;
			case 'b':
				catType = 2;
				break;
			case 'g':
				catType = 3;
				break;
			default:
				continue;
			}
		}

	char typeName[][11] = { "chunbae", "nabi", "yeongcheol" };

	printf("%s\n", typeName[catType - 1]);

	return 0;
}