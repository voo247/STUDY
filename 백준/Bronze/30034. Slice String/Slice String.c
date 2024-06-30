#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#define SIZE 1001

int main() {
	int n, m, k, s;
	int charDelimiter[26 * 2] = { 0 }, intDelimiter[10] = { 0 };	// | A~Z | + | a~z | = 26 * 2, | 0 ~ 9 | = 10
	char str[SIZE];

	scanf("%d", &n);
	getchar();
	for (int i = 0; i < n; i++) {
		char tmp;
		scanf("%c ", &tmp);

		if(isupper(tmp))
			charDelimiter[tmp - 'A']++;
		else if(islower(tmp))
			charDelimiter[tmp - 'a' + 26]++;
	}

	scanf("%d", &m);
	for (int i = 0; i < m; i++) {
		int tmp;
		scanf("%d", &tmp);
		intDelimiter[tmp]++;
	}

	scanf("%d", &k);
	getchar();
	for (int i = 0; i < k; i++) {
		char tmp;
		scanf("%c ", &tmp);
		
		if (isdigit(tmp))
			intDelimiter[tmp - '0'] = 0;
		else {
			if (isupper(tmp))
				charDelimiter[tmp - 'A'] = 0;
			else if (islower(tmp))
				charDelimiter[tmp - 'a' + 26] = 0;
		}
	}

	scanf("%d", &s);
	getchar();
	scanf("%[^\n]s", str);

	for (int i = 0, enter = 1; i < s; i++) {
		if (str[i] == ' ') {
			if (enter++) continue;
			printf("\n");
			continue;
		}
		else if (isdigit(str[i]) && intDelimiter[str[i] - '0']) {
			if (enter++) continue;
			printf("\n");
			continue;
		}
		else if (isupper(str[i]) && charDelimiter[str[i] - 'A']) {
			if (enter++) continue;
			printf("\n");
			continue;
		}
		else if (islower(str[i]) && charDelimiter[str[i] - 'a' + 26]) {
			if (enter++) continue;
			printf("\n");
			continue;
		}

		printf("%c", str[i]);
		enter = 0;
	}

	return 0;
}