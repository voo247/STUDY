#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, m, k;
	int together_cnt = 0;

	scanf("%d %d %d", &n, &m, &k);
	getchar();

	for (int i = 0; i < n; i++) {
		for (int j = 0, sittable = 0; j < m; j++) {
			char seat;
			scanf("%c", &seat);

			if (seat == '0') sittable++;
			else if (seat == '1') sittable = 0;

			if (sittable >= k) together_cnt++;
		}
		getchar();
	}

	printf("%d", together_cnt);

	return 0;
}