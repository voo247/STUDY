#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define ALPHABET_CNT 26
#define SIZE 200000

int alphabet[ALPHABET_CNT][SIZE] = { 0 };
char str[SIZE + 1];

int cumulativeSumAtIToJ(int arr[], int i, int j) {
	if (i < 0)
		return arr[j];
	return arr[j] - arr[i];
}

int main() {
	int q;

	scanf("%s", str);
	scanf("%d", &q);
	getchar();

	for (int i = 0; str[i] != '\0'; i++)
		if (i == 0) alphabet[str[i] - 'a'][i]++;
		else
			for (int j = 0; j < ALPHABET_CNT; j++)
				if (j == str[i] - 'a')
					alphabet[j][i] = (alphabet[j][i - 1] + 1);
				else
					alphabet[j][i] = alphabet[j][i - 1];

	for (int i = 0; i < q; i++) {
		char word;
		int startIndex, endIndex;

		scanf("%c %d %d", &word, &startIndex, &endIndex);
		getchar();

		printf("%d\n", cumulativeSumAtIToJ(alphabet[word - 'a'], startIndex - 1, endIndex));
	}

	return 0;
}