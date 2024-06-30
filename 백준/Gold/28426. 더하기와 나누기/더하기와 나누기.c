#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

long long int arr[100000];

int main() {
	int n;

	scanf("%d", &n);

	long long int sum = 0;
	for (int i = 0; i < n; i++)
		if (i == 0) {
			sum += 2;
			arr[i] = 2;
		}
		else if (i == 1) {
			sum += 3;
			arr[i] = 3;
		}
		else{
			sum = sum + (arr[i - 1] + arr[1]);
			arr[i] = (arr[i - 1] + arr[1]);
		}

	while (1) {
		int cnt = 0;

		for (int i = 0; i < n; i++) {
			if (sum % arr[i] == 0)
				cnt++;
		}

		if (cnt == 1) break;
		
		arr[n - 1] += 1;
		sum += 1;
	}

	for (int i = 0; i < n; i++)
		printf("%lld ", arr[i]);

	return 0;
}