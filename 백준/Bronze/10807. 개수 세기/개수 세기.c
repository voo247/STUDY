#include <stdio.h>

int main(){
    int arr[100];
    int n, v, cnt = 0;
    
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    
    scanf("%d", &v);
    
    for(int i = 0; i < n; i++){
        if(arr[i] == v)
            cnt++;
        else
            continue;
    }
    
    printf("%d\n", cnt);
    
    return 0;
}