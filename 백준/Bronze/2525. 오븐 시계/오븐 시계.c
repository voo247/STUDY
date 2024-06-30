#include <stdio.h>

int main(){
    int hr, min, timer;
    
    scanf("%d %d %d", &hr, &min, &timer);
    
    min = min + (timer % 60);
    hr = hr + (timer / 60);
    
    while(min >= 60){
        min = min - 60;
        hr = hr + 1;
    }
    
    while(hr >= 24)
        hr = hr - 24;
    
    printf("%d %d", hr, min);
    
    return 0;
}