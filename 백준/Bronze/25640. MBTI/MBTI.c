#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE 5

int main() {
	int n, same = 0;
	char jinho[SIZE];

	scanf("%s", jinho);
	scanf("%d", &n);
	getchar();

	for (int i = 0; i < n; i++) {
		char mbti[SIZE];
		scanf("%s", mbti);

		if(strcmp(jinho, mbti) == 0)
			same++;
	}

	printf("%d\n", same);

	return 0;
}