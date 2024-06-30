#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 16

int main() {
    char str[SIZE];
    int arr[26] = {3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 8, 8, 8, 8, 9, 9, 9, 10, 10, 10, 10};
    int sec = 0;

    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++)
        sec += arr[str[i] - 'A'];

    printf("%d", sec);

    return 0;
}