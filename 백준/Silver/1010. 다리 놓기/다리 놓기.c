#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int t;

	scanf("%d", &t);

	for (int i = 0; i < t; i++) {
		int n, m;
		unsigned long long int answer = 1;

		scanf("%d %d", &n, &m);

		if (m - n > n) {
			for (int i = m; i > m - n; i--)
				answer *= i;
			for (int i = n; i > 0; i--)
				answer /= i;
		}
		else {
			for (int i = m; i > n; i--)
				answer *= i;
			for (int i = m - n; i > 0; i--)
				answer /= i;
		}

		printf("%llu\n", answer);
	}

	return 0;
}