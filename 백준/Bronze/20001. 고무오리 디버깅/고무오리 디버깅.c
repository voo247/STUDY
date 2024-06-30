#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char preset[][30] = { "고무오리 디버깅 시작", "문제", "고무오리", "고무오리 디버깅 끝" };
	char sentence[30];
	int quest = 0;

	do {
		gets(sentence);
	} while (strcmp(sentence, preset[0]));

	while(1) {
		gets(sentence);

		if (!strcmp(sentence, preset[1]))
			quest++;
		else if (!strcmp(sentence, preset[2])) {
			if(quest == 0)
				quest += 2;
			else
				quest--;
		}
		else if(!strcmp(sentence, preset[3]))
			break;
	}

	if(quest > 0)
		printf("힝구\n");
	else
		printf("고무오리야 사랑해\n");

	return 0;
}