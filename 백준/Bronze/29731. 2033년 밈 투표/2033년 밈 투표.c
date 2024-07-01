#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>

int is_same_str(char gongyak[7][50], char str[]) {
	for (int i = 0; i < 7; i++)
		if (!strcmp(str, gongyak[i]))
			return 0;
	return 1;
}

int main() {
	char gongyak[7][50] = { "Never gonna give you up", "Never gonna let you down", "Never gonna run around and desert you", "Never gonna make you cry", "Never gonna say goodbye", "Never gonna tell a lie and hurt you", "Never gonna stop" };
	int n;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		char str[51];
		scanf(" %[^\n]s", &str);

		if (is_same_str(gongyak, str)) {
			printf("Yes\n");
			return 0;
		}
	}
	
	printf("No\n");

	return 0;
}