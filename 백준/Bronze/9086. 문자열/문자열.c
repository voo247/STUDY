#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 1001

int main() {
    char s[SIZE];
    int n;

    scanf("%d", &n);

    for (int cnt = 0; cnt < n; cnt++) {
        int len;

        scanf("%s", s);

        for (len = 0; s[len] != '\0'; len++);

        printf("%c%c\n", s[0], s[--len]);

        while (getchar() != '\n');
    }

    return 0;
}