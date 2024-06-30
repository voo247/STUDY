#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 101

int is_group_word(char[]);

int main() {
    int num, group_word = 0;
    char word[SIZE];

    scanf("%d", &num);

    for (int cnt = 0; cnt < num; cnt++) {
        while (getchar() != '\n');
        scanf("%s", word);

        group_word += is_group_word(word);
    }

    printf("%d", group_word);

    return 0;
}

int is_group_word(char word[]) {
    for (int i = 0; word[i] != '\0'; i++)
        if (word[i] == word[i + 1])
            continue;
        else
            for (int j = i + 1; word[j] != '\0'; j++)
                if (word[i] == word[j])
                    return 0;

    return 1;
}