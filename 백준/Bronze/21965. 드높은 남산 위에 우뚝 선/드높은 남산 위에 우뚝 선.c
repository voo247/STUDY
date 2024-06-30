#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	int mountain = 1;
	int arr[100000] = { 0 };

	scanf("%d", &n);

	for (int i = 0, vertex = 0; i < n; i++) {
		scanf("%d", &arr[i]);

		if (i == 0) continue;

		if (!(arr[i - 1] < arr[i]) && !vertex)
			vertex++;
		else if (!(arr[i - 1] > arr[i]) && vertex)
			mountain = 0;
	}

	if(mountain)
		printf("YES\n");
	else
		printf("NO\n");

	return 0;
}