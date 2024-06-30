#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 1000001

int main() {
    char s[SIZE];
    int word_cnt = 0;
    
    scanf("%[^\n]s", s);
    /*scanf 함수는 원래 공백 문자 단위로 끊지만,
    [^\n]을 사용하면 \n가 나올 때까지의 모든 문자를 한번에 입력 받을 수 있음.*/
    
    for (int i = 0; s[i] != '\0'; i++) {
        if(s[i] >= 'A' && s[i] <= 'z'){
            if(s[i + 1] == '\0' || s[i + 1] == ' ')
                word_cnt++;
        }
        else continue;
    }
    
    printf("%d\n", word_cnt);
    
    return 0;
}