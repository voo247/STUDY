#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 3

int is_triangle(int[]);
int what_kind_of_triangle(int[]);

int main() {
	while (1) {
		int length[SIZE] = { 0 };
		int i;

		for (i = 0; i < SIZE; i++)
			scanf("%d", &length[i]);

		for (i = 0; i < SIZE; i++)
			if (length[i] != 0)
				break;
		if(i == SIZE)
			return 0;

		if (is_triangle(length))
			switch (what_kind_of_triangle(length)) {
			case 0:
				printf("Scalene\n");
				break;
			case 1:
				printf("Isosceles\n");
				break;
			case 3:
				printf("Equilateral\n");
				break;
			}
		else
			printf("Invalid\n");
	}
}

int is_triangle(int length[]) {
	int longest = 0;
	int sum = 0;

	for (int i = 0; i < SIZE; i++) {
		sum += length[i];
		if (longest < length[i])
			longest = length[i];
	}

	if (longest * 2 < sum)
		return 1;
	else
		return 0;
}

int what_kind_of_triangle(int length[]) {
	int sameCnt = 0;

	for (int i = 0; i < SIZE; i++)
		for (int j = i + 1; j < SIZE; j++)
			if (length[i] == length[j])
				sameCnt++;

	return sameCnt;
}