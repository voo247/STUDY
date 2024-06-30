#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE 4
#define CHAR_SIZE 21

int main() {
	char color[SIZE][CHAR_SIZE];

	for (int i = 0; i < SIZE; i++)
		scanf("%s", color[i]);

	for (int i = 0; i < SIZE; i++)
		for (int j = i + 1; j < SIZE; j++)
			for (int k = 0; color[i][k] != '\0' || color[j][k] != '\0'; k++)
				if(color[i][k] < color[j][k])
					break;
				else if (color[i][k] > color[j][k]) {
					char tmp[CHAR_SIZE];
					strcpy(tmp, color[i]);
					strcpy(color[i], color[j]);
					strcpy(color[j], tmp);
					break;
				}
				else if (strcmp(color[i], color[j]) == 0)
					strcpy(color[j], "-");

	for (int i = 0; i < SIZE; i++)
		if (strcmp(color[i], "-") != 0)
			for (int j = 0; j < SIZE; j++)
				if (strcmp(color[j], "-") != 0)
					printf("%s %s\n", color[i], color[j]);

	return 0;
}