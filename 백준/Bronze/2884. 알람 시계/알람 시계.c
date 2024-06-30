/*
입력 시간은 24시간 표현
24시간 표현에서 하루의 시작은 0:0(자정)이고
끝은 23:59(다음날 자정 1분 전)이다
시간을 나타낼 때, 불필요한 0은 사용하지 않는다.*/

#include <stdio.h>

int main(){
    int hr, min;
    
    scanf("%d %d", &hr, &min);
    
    min = min - 45;
    
    if(min < 0){
        hr = hr - 1;
        min = min + 60;
        if(hr < 0)
            hr = hr + 24;
    }
    
    printf("%d %d\n", hr, min);
    
    return 0;
}