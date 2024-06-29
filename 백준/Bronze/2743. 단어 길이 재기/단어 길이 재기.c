#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 101

int main() {
    char s[SIZE];
    int i;

    scanf("%s", s);

    for (i = 0; s[i] != '\0'; i++);

    printf("%d", i);

    return 0;
}