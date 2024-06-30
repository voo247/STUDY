#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 101

int main() {
    char str[SIZE];
    
    while(scanf("%[^\n]s", str) != EOF){    //scanf에서 입력값이 없으면 EOF를 반환
        printf("%s\n", str);                  //%[...]은 대괄호 안의 문자만 입력 받겠다
        while(getchar() != '\n');           //%[^...]은 대괄호 안의 문자만 '빼고' 입력 받겠다
    }

    return 0;
}