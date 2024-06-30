#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define EA 50
#define SIZE 51

int main() {
	int n;
	char word[EA][SIZE];
	char searchWord[SIZE];

	scanf("%d", &n);
	getchar();

	for (int i = 0; i < n; i++)
		scanf("%s", word[i]);
	
	int i = 0;
	for (; word[0][i] != '\0'; i++) {
		int j = 0;
		for (; j < n; j++)
			if (word[0][i] != word[j][i])
				break;
			else
				continue;

		if (j == n || n == 1)
			searchWord[i] = word[0][i];
		else
			searchWord[i] = '?';
	}
	searchWord[i] = '\0';

	printf("%s\n", searchWord);

	return 0;
}