#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	int n;

	scanf("%d", &n);
	getchar();

	for (int i = 0; i < n; i++) {
		char sentence[21];

		scanf("%s", sentence);

		if (6 <= strlen(sentence) && strlen(sentence) <= 9)
			printf("yes\n");
		else
			printf("no\n");
	}

	return 0;
}