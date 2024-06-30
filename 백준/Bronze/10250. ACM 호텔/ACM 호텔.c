#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num;

	scanf("%d", &num);

	for (int i = 0; i < num; i++) {
		int h, w, n;

		scanf("%d %d %d", &h, &w, &n);

		int roomW = n / h + 1;
		int roomH = n % h;
		if (roomH == 0) {
			roomH = h;
			roomW--;
		}

		printf("%d%02d\n", roomH, roomW);
	}
}