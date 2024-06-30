#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int arr[30], i, j;

    for (i = 0; i < 28; i++)
        scanf("%d", &arr[i]);

    for (i = 1; i <= 30; i++) {
        for (j = 0; j < 28; j++)
            if (arr[j] == i)
                break;

        if (j == 28)
            printf("%d\n", i);
    }

    return 0;
}