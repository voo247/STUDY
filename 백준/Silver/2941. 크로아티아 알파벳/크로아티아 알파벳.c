#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 101

int main() {
    char word[SIZE];
    int len, croatia_cnt = 0;

    scanf("%s", word);

    for (len = 0; word[len] != '\0'; len++);

    for (int i = 0; i < len; i++) {
        if (word[i] == 'c' && word[i + 1] == '=') {
            croatia_cnt++;
            i++;
        }
        else if (word[i] == 'c' && word[i + 1] == '-') {
            croatia_cnt++;
            i++;
        }
        else if (word[i] == 'd' && word[i + 1] == 'z' && word[i + 2] == '=') {
            croatia_cnt++;
            i += 2;
        }
        else if (word[i] == 'd' && word[i + 1] == '-') {
            croatia_cnt++;
            i++;
        }
        else if (word[i] == 'l' && word[i + 1] == 'j') {
            croatia_cnt++;
            i++;
        }
        else if (word[i] == 'n' && word[i + 1] == 'j') {
            croatia_cnt++;
            i++;
        }
        else if (word[i] == 's' && word[i + 1] == '=') {
            croatia_cnt++;
            i++;
        }
        else if (word[i] == 'z' && word[i + 1] == '=') {
            croatia_cnt++;
            i++;
        }
        else croatia_cnt++;
    }

    printf("%d", croatia_cnt);

    return 0;
}