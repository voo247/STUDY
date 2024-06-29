#include <stdio.h>

int main(){
    int n;
    
    scanf("%d", &n);
    
    while(n > 0){
        printf("long ");
        n -= 4;
    }
    
    printf("int");
    
    return 0;
}