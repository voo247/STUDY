#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int beforeStoppingTheBus(int n);

int main() {
	int k;

	scanf("%d", &k);
	for (int i = 0; i < k; i++) {
		int n;
		scanf("%d", &n);
		
		printf("%d\n", beforeStoppingTheBus(n));
	}

	return 0;
}

int beforeStoppingTheBus(int n) {
	int peopleInBus = 0;

	for (int i = 0; i < n; i++)
		peopleInBus = peopleInBus * 2 + 1;

	return peopleInBus;
}