#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int num;

    scanf("%d", &num);

    for (int i = 0; i < num; i++) {
        for (int j = i; j < num - 1; j++)
            printf(" ");
        for(int j = 0; j < (i * 2) + 1; j++)
            printf("*");
        printf("\n");
    }
    for (int i = num - 1; i > 0; i--) {
        for (int j = i; j < num; j++)
            printf(" ");
        for (int j = 0; j < (i * 2) - 1; j++)
            printf("*");
        printf("\n");
    }

    return 0;
}