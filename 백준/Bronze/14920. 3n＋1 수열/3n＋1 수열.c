#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int c(int n){
    if(n == 1)
        return 1;
    else if(n % 2 == 0)
        return c(n / 2) + 1;
    else
        return c(n * 3 + 1) + 1;
}

int main() {
	int n;

	scanf("%d", &n);

	int cnt = c(n);

	printf("%d\n", cnt);

	return 0;
}