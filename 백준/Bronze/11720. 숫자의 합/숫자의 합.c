#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 101

int main() {
    char arr[SIZE];
    int n, sum = 0;

    scanf("%d", &n);
    getchar();
    scanf("%s", arr);
    
    for (int i = 0; i < n; i++)
        sum += arr[i] - '0';
    
    printf("%d", sum);

    return 0;
}