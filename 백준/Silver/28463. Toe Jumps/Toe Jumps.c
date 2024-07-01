#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 2

int main() {
	char ewsn[5] = { 'S', 'E', 'N', 'W', '\0' };
	char direction;
	char str[SIZE][SIZE + 1];
	char jump[SIZE + 1] = { '\0' };
	int position[2];

	scanf("%c", &direction);
	for (int i = 0; i < SIZE; i++)
		scanf("%s", &str[i]);

	for (int i = 0, index = 0; i < SIZE; i++)
		for (int j = 0; str[i][j] != '\0'; j++)
			if (str[i][j] != '.') {
				jump[index] = str[i][j];
				position[index] = j + (i * 2) + 1;
				index++;
			}

	for (int i = 0; i < 4; i++)
		if (direction != ewsn[i])
			for (int j = 0; j < 2; j++) {
				if (position[j] == 2) {
					char tmp = jump[0];
					jump[0] = jump[1];
					jump[1] = tmp;
				}
				switch (position[j]) {
				case 1:
					position[j] = 2;
					break;
				case 2:
					position[j] = 4;
					break;
				case 3:
					position[j] = 1;
					break;
				case 4:
					position[j] = 3;
					break;
				}
			}
		else
			break;

	if (((position[0] == 2 && position[1] == 3) || (position[0] == 3 && position[1] == 2)) && jump[0] == 'O' && jump[1] == 'P')
		printf("%s\n", "T");
	else if (((position[0] == 1 && position[1] == 4) || (position[0] == 4 && position[1] == 1)) && jump[0] == 'I' && jump[1] == 'P')
		printf("%s\n", "F");
	else if (((position[0] == 1 && position[1] == 4) || (position[0] == 4 && position[1] == 1)) && jump[0] == 'O' && jump[1] == 'P')
		printf("%s\n", "Lz");
	else
		printf("%s\n", "?");

		return 0;
}