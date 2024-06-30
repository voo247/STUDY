#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 1001

int main() {
    int n;
    
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        char s[SIZE];
        int times;
        
        scanf("%d %s", &times, s);
        
        for(int j = 0; s[j] != '\0'; j++)
            for(int k = 0; k < times; k++)
                printf("%c", s[j]);
        printf("\n");
    }

    return 0;
}