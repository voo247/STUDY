#include <stdio.h>

int main(){
    long long int cost, sum = 0;
    int n;
    
    scanf("%lld", &cost);
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++){
        int price, num;
        scanf("%d %d", &price, &num);
        sum = sum + (price * num);
    }
    
    if(sum == cost)
        printf("Yes");
    else
        printf("No");
    
    return 0;
}