#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 1000001

char whatIsMax(int[], int);

int main() {
    char word[SIZE];
    int len, alphabet[26] = { 0 };

    scanf("%s", word);

    for (len = 0; word[len] != '\0'; len++)        //word의 문자열 길이 구함과 동시에
        if (word[len] >= 'a' && word[len] <= 'z')   //모든 소문자를 대문자로
            word[len] = word[len] - 'a' + 'A';

    for (int i = 0; i < len; i++)
        alphabet[word[i] - 'A']++;

    printf("%c", whatIsMax(alphabet, 26));

    return 0;
}

char whatIsMax(int ab[], int size) {
    char maxChar;
    
    for (int i = 0, max = -999; i < size; i++)
        if (max < ab[i]) {
            maxChar = i + 'A';
            max = ab[i];
        }
        else if (max == ab[i]) maxChar = '?';

    return maxChar;
}