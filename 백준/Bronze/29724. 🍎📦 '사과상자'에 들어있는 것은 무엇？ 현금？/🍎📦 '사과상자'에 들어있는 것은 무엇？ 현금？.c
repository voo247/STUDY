#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;

	scanf("%d", &n);
	getchar();

	int gram = 0, won = 0;
	for (int i = 0; i < n; i++) {
		char t;
		int w, h, l;

		scanf("%c %d %d %d", &t, &w, &h, &l);

		if (t == 'A') {
			int apple = (w / 12) * (h / 12) * (l / 12);
			gram = gram + 1000 + 500 * apple;
			won += (apple * 4000);
		}
		else if (t == 'B')
			gram += 6000;

		getchar();
	}
	printf("%d\n%d\n", gram, won);

	return 0;
}