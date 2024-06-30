#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE 101

int main() {
    char s[SIZE];

    scanf("%s", s);

    for (int i = 'a'; i <= 'z'; i++) {
        int j;

        for (j = 0; s[j] != '\0'; j++)
            if (s[j] == i) {
                printf("%d ", j);
                break;
            }
        if (j == strlen(s))
            printf("%d ", -1);
    }

    return 0;
}