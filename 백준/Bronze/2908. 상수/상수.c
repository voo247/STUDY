#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 4

void inverseTheString(char str[]);

int main() {
    char str1[SIZE], str2[SIZE];

    scanf("%s %s", str1, str2);

    for (int i = SIZE - 2; i >= 0; i--)    //SIZE에서 2를 빼는 이유:
        if (str1[i] == str2[i])            //str이 문자열이므로 NULL(\0) 포함하지 않도록(-1)
            continue;                      //배열은 0부터 SIZE - 1까지이므로(-1)
        else if (str1[i] > str2[i]) {
            inverseTheString(str1);
            printf("%s\n", str1);
            break;
        }
        else if (str1[i] < str2[i]) {
            inverseTheString(str2);
            printf("%s\n", str2);
            break;
        }

    return 0;
}

void inverseTheString(char str[]) {
    for (int i = 0; i < (SIZE - 1) / 2; i++) {
        char temp = str[i];
        str[i] = str[SIZE - 2 - i];
        str[SIZE - 2 - i] = temp;
    }
}