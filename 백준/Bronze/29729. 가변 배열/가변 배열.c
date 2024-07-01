#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int size, n, m;

	scanf("%d %d %d", &size, &n, &m);
	
	int use = 0;
	for (int i = 0; i < m + n; i++) {
		int ask;
		scanf("%d", &ask);

		if (ask == 0) use--;
		else if (ask == 1) {
			use++;
			if (use > size)
				size *= 2;
		}
	}

	printf("%d\n", size);

	return 0;
}