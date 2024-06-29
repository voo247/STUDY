#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    char s[1001];
    int n;

    scanf("%s %d", s, &n);
    printf("%c", s[n - 1]);

    return 0;
}