#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char str[1001];
	scanf("%s", str);

	int dksh = 0;
	for (int i = 0, dksh_tmp = 0; str[i] != '\0'; i++)
		if (str[i] == 'D')
			dksh_tmp = 1;
		else if (dksh_tmp == 1 && str[i] == 'K')
			dksh_tmp++;
		else if (dksh_tmp == 2 && str[i] == 'S')
			dksh_tmp++;
		else if (dksh_tmp == 3 && str[i] == 'H') {
			dksh_tmp = 0;
			dksh++;
		}
		else
			dksh_tmp = 0;

	printf("%d\n", dksh);

	return 0;
}