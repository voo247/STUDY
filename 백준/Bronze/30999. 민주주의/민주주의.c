#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	int n, m;
	int confirm = 0;

	scanf("%d %d", &n, &m);
	getchar();
	
	for (int i = 0; i < n; i++) {
		char member[100];
		scanf("%s", member);

		int pro = 0;
		for(int j = 0; j < m; j++)
			if (member[j] == 'O')
				pro++;

		if (pro > m / 2)
			confirm++;
	}

	printf("%d\n", confirm);
	
	return 0;
}