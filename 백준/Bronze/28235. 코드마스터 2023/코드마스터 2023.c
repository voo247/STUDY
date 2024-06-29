#include <stdio.h>
#include <string.h>

int main(){
    char cmpStr[4][10] = { "SONGDO", "CODE", "2023", "ALGORITHM" };
char output[4][11] = { "HIGHSCHOOL", "MASTER", "0611", "CONTEST"};

char input[10];
    
    scanf("%s", input);
    for(int i = 0; i < 4; i++)
if(!strcmp(cmpStr[i], input))
printf("%s", output[i]);
    
    return 0;
}