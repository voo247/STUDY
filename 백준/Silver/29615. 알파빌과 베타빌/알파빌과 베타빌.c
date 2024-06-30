#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int checkTheFriendsName(int name, int num[], int n);

int main() {
	int num[1000];
	int friendsNum[1000];
	int n, m;

	scanf("%d %d", &n, &m);

	for (int i = 0; i < n; i++)
		scanf("%d", &num[i]);
	for (int i = 0; i < m; i++)
		scanf("%d", &friendsNum[i]);
	
	int cnt = 0;
	for (int i = 0; i < m; i++)
		cnt += checkTheFriendsName(friendsNum[i], num, m);

	printf("%d", cnt);

	return 0;
}

int checkTheFriendsName(int name, int num[], int n) {
	for (int i = 0; i < n; i++)
		if (name == num[i])
			return 0;
	return 1;
}