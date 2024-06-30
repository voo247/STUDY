#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int j, n;

	scanf("%d %d", &j, &n);
	getchar();

	int cnt = 0;

	for (int i = 0; i < n; i++) {
		char question[101];
		int size = 0;

		scanf("%[^\n]s", question);

		for (int k = 0; question[k] != '\0'; k++)
			if (size > j)
				break;
			else if ('A' <= question[k] && question[k] <= 'Z')
				size += 4;
			else if (('a' <= question[k] && question[k] <= 'z') || ('0' <= question[k] && question[k] <= '9'))
				size += 2;
			else if (question[k] == ' ')
				size += 1;

		if (size <= j)
			cnt++;

		getchar();
	}

	printf("%d\n", cnt);

	return 0;
}