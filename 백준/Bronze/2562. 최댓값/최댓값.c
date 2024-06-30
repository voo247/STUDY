#include <stdio.h>
#define SIZE 9

int main(){
    int arr[SIZE];
    int max = -999, max_index;
    
    for(int i = 0; i < SIZE; i++){
        scanf("%d", &arr[i]);
        
        if(arr[i] > max){
            max = arr[i];
            max_index = i + 1;
        }
    }
    
    printf("%d\n%d", max, max_index);
    
    return 0;
}