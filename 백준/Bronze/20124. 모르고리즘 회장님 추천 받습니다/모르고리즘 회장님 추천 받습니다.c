#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int nameIsFirst(char name[], char president[]) {
	for (int i = 0; i < strlen(president) && i < strlen(name); i++)
		if (name[i] < president[i])
			return 1;
		else if (name[i] > president[i])
			return 0;
	
	if (strlen(president) > strlen(name))
		return 1;
	else
		return 0;
}

int main() {
	int n;
	int maxVotes = -999;
	char president[11] = "";

	scanf("%d", &n);
	getchar();

	for (int i = 0; i < n; i++) {
		int votes;
		char name[11];

		scanf("%s %d", name, &votes);
		getchar();

		if (maxVotes < votes) {
			strcpy(president, name);
			maxVotes = votes;
		}
		else if (maxVotes == votes && nameIsFirst(name, president))
			strcpy(president, name);
	}

	printf("%s\n", president);

	return 0;
}