#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int is_bigger(int, int);

int main() {
	while(1){
		int a, b;
		scanf("%d %d", &a, &b);
		
		if(a == 0 && b == 0)
			break;
		
		if(is_bigger(a, b))
			printf("Yes\n");
		else
			printf("No\n");
	}

	return 0;
}


int is_bigger(int a, int b){
    if(a > b)
		return 1;
    else
		return 0;
}