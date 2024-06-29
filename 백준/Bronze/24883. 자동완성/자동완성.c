#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    char ch;

    scanf("%c", &ch);

    switch (ch) {
    case 'N':
    case 'n':
        printf("Naver D2\n");
        break;
    default:
        printf("Naver Whale\n");
   }

    return 0;
}