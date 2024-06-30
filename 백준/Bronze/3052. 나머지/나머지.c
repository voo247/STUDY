#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

int main() {
    int arr[SIZE], i, j, cnt = 0;

    for (i = 0; i < SIZE; i++) {
        int tmp;
        scanf("%d", &tmp);
        arr[i] = tmp % 42;
    }

    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < i; j++)
            if (arr[j] == arr[i])
                break;
        if (j == i)
            cnt++;
    }

    printf("%d\n", cnt);

    return 0;
}