#include <stdio.h>

int main(){
    int first, second;
    int a, b, c;
    
    scanf("%d %d", &first, &second);
    
    a = first * (second % 10);
    b = first * ((second / 10) % 10);
    c = first * (second / 100);
    
    printf("%d\n%d\n%d\n", a, b ,c);
    printf("%d\n", a + (b * 10) + (c * 100));
    
    return 0;
}