#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int floor;
	int roomNumber;
	int eta;
} Classroom;

int main() {
	int n, m, k;
	int firstIndex = 0;

	scanf("%d %d %d", &n, &m, &k);
	
	//급식실 (1, m + 1)

	Classroom* rival = (Classroom*)malloc(sizeof(Classroom) * k);
	
	for (int i = 0; i < k; i++) {
		scanf("%d %d", &(rival + i)->floor, &(rival + i)->roomNumber);

		(rival + i)->eta = ((rival + i)->floor - 1) + (m + 1 - (rival + i)->roomNumber);

		if ((rival + i)->eta < (rival + firstIndex)->eta)
			firstIndex = i;
	}

	printf("%d\n", firstIndex + 1);
	
	free(rival);

	return 0;
}