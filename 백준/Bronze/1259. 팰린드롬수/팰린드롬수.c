#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 6

int main() {
    while (1) {
        char word[SIZE];
        int len, palindrome = 1;

        scanf("%s", word);

        if (word[0] == '0')
            return 0;

        for (len = 0; word[len] != '\0'; len++);

        for (int i = 0; i < len / 2; i++)
            if (word[i] != word[len - i - 1]) {
                palindrome = 0;
                break;
            }

        if (palindrome)
            printf("yes\n");
        else
            printf("no\n");
    }
}