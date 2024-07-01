#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int fisrt[3], second[2];
	int p[3] = { 0 }, q[3] = { 0 };
	int result[3] = { 0 };

	for (int i = 0; i < 3; i++)
		scanf("%d", &fisrt[i]);
	for (int i = 0; i < 2; i++)
		scanf("%d", &second[i]);

	if (fisrt[0] == 0 && fisrt[1] == second[0] && fisrt[2] == second[1]) {
		printf("Nice\n");
		return 0;
	}

	p[0] = second[0] * fisrt[0];
	p[1] = second[0] * fisrt[1];
	p[2] = second[0] * fisrt[2] + second[1];

	q[0] = second[0] * second[0] * fisrt[0];
	q[1] = 2 * second[0] * second[1] * fisrt[0] + second[0] * fisrt[1];
	q[2] = second[1] * second[1] * fisrt[0] + second[1] * fisrt[1] + fisrt[2];

	for (int i = 0; i < 3; i++)
		result[i] = p[i] - q[i];

	int contact = result[1] * result[1] - 4 * result[0] * result[2];

	if(contact < 0 || (result[0] == 0 && result[1] == 0))
		printf("Head on\n");
	else if(contact == 0 || (result[0] == 0 && result[1] != 0))
		printf("Remember my character\n");
	else if(contact > 0)
		printf("Go ahead\n");

	return 0;
}
