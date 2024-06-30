#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct {
	char name[16];
	int cost;
} BusLine;

int main() {
	int n;
	BusLine line[1000];
	int jinjuIndex, over = 0;

	scanf("%d", &n);
	getchar();
	
	for (int i = 0; i < n; i++) {
		scanf("%s %d", line[i].name, &line[i].cost);

		if (!strcmp(line[i].name, "jinju"))
			jinjuIndex = i;
	}

	for (int i = 0; i < n; i++)
		if (line[jinjuIndex].cost < line[i].cost)
			over++;

	printf("%d\n%d\n", line[jinjuIndex].cost, over);
	
	return 0;
}