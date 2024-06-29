#include <stdio.h>

int main(){
    int a, b, c;
    int sanggold;
    
    scanf("%d %d %d", &a, &b, &c);
    
    if(a == b && a == c)
        sanggold = 10000 + (a * 1000);
    else if(a == b && a != c)
        sanggold = 1000 + (a * 100);
    else if(b == c && b != a)
        sanggold = 1000 + (b * 100);
    else if(c == a && c != b)
        sanggold = 1000 + (c * 100);
    else{
        int big = a;
        if(big < b) big = b;
        if(big < c) big = c;
        
        sanggold = big * 100;
    }
    
    printf("%d\n", sanggold);
    
    return 0;
}