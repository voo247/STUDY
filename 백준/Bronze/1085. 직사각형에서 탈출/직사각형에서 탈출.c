#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int whatsMinDistance(int, int);

int main() {
	int x, y, w, h;
	int minX, minY;

	scanf("%d %d %d %d", &x, &y, &w, &h);

	if (x <= w - x)
		minX = x;
	else
		minX = w - x;

	if (y <= h - y)
		minY = y;
	else
		minY = h - y;
	
	printf("%d\n", whatsMinDistance(minX, minY));

	return 0;
}

int whatsMinDistance(int x, int y){
	if (x <= y)
		return x;
	else
		return y;
}