#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		int box = 0, right = 0;
		char str[51];
		scanf("%s", str);

		for (int j = 0; str[j] != '\0'; j++) {
			if (str[j] == '(')
				box++;
			else if (str[j] == ')')
				box--;

			if (box < 0) {
				right = -1;
				break;
			}
		}

		if (right == -1 || box != 0)
			printf("NO\n");
		else
			printf("YES\n");
	}

	return 0;
}