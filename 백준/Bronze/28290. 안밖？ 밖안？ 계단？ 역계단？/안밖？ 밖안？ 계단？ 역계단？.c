#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char template[][8] = { "in-out", "out-in", "stairs", "reverse", "molu" };
	char str[9];

	scanf("%s", str);

	if (!strcmp(str, "fdsajkl;") || !strcmp(str, "jkl;fdsa"))
		printf("%s\n", template[0]);
	else if (!strcmp(str, "asdf;lkj") || !strcmp(str, ";lkjasdf"))
		printf("%s\n", template[1]);
	else if (!strcmp(str, "asdfjkl;"))
		printf("%s\n", template[2]);
	else if (!strcmp(str, ";lkjfdsa"))
		printf("%s\n", template[3]);
	else
		printf("%s\n", template[4]);

	return 0;
}