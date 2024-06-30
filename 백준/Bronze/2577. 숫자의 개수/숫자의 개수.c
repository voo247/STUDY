#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b, c;
	int arr[10] = { 0 };

	scanf("%d %d %d", &a, &b, &c);

	for (int sum = a * b * c; sum > 0; sum /= 10)
		arr[sum % 10]++;

	for(int i = 0; i < 10; i++)
		printf("%d\n", arr[i]);
}