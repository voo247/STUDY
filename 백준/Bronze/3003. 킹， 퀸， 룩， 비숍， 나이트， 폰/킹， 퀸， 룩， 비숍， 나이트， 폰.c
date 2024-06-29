#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 6

int main() {
    int arr[SIZE] = { 1, 1, 2, 2, 2, 8 };
    int correntPiece[SIZE];

    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &correntPiece[i]);
        printf("%d ", arr[i] - correntPiece[i]);
    }

    return 0;
}