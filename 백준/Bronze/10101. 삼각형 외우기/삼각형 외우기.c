#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 3

int is_triangle(int[]);
int is_equilateral(int[]);
int is_isosceles(int[]);
int is_scalene(int[]);

int main() {
	int angle[SIZE] = { 0 };

	for (int i = 0; i < SIZE; i++)
		scanf("%d", &angle[i]);

	if(!is_triangle(angle))
		printf("Error\n");
	else if (is_equilateral(angle))
		printf("Equilateral\n");
	else if (is_isosceles(angle))
		printf("Isosceles\n");
	else if (is_scalene(angle))
		printf("Scalene\n");

	return 0;
}

int is_triangle(int angle[]) {
	int sum = 0;
	for (int i = 0; i < SIZE; i++)
		sum += angle[i];

	if (sum == 180)
		return 1;
	else
		return 0;
}

int is_equilateral(int angle[]) {
	for (int i = 0; i < SIZE; i++)
		if (angle[i] != 60)
			return 0;
	return 1;
}

int is_isosceles(int angle[]) {
	for (int i = 0; i < SIZE; i++)
		for(int j = i + 1; j < SIZE; j++)
			if (angle[i] == angle[j] && angle[i] != 60)
				return 1;
	return 0;
}

int is_scalene(int angle[]){
	for (int i = 0; i < SIZE; i++)
		for (int j = i + 1; j < SIZE; j++)
			if (angle[i] == angle[j])
				return 0;
	return 1;
}