#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 30

int main() {
	int n;
	char name[SIZE + 1];

	scanf("%d", &n);
	getchar();
	scanf("%s", name);

	int eulReul = 0;
	switch (name[n - 1]) {
	case 'q':
	case 'w':
	case 'e':
	case 'r':
	case 't':
	case 'a':
	case 's':
	case 'd':
	case 'f':
	case 'g':
	case 'z':
	case 'x':
	case 'c':
	case 'v':
		eulReul = 1;
		break;
	default:
		eulReul = 0;
		break;
	}

	printf("%d\n", eulReul);

	return 0;
}