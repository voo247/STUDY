#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 101

int main() {
    char word[SIZE];
    int len, palindrome = 1;

    scanf("%s", word);

    for (len = 0; word[len] != '\0'; len++);

    for (int i = 0; i < len / 2; i++)
        if (word[i] != word[len - i - 1]) {
            palindrome = 0;
            break;
        }

    printf("%d", palindrome);

    return 0;
}