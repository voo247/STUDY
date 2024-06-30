#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 51

double whatsScore(char[]);

int main() {
    char class_name[SIZE], rating[5];
    double time, total_rating = 0.0;
    double total_time = 0.0;

    for (int cnt = 0; cnt < 20; cnt++) {
        scanf("%s %lf %s", class_name, &time, rating);
        while (getchar() != '\n');

        if (rating[0] == 'P') continue;

        total_rating = total_rating + (time * whatsScore(rating));
        total_time += time;
    }

    double final_rating = total_rating / total_time;
    printf("%lf", final_rating);

    return 0;
}

double whatsScore(char grade[]) {
    double score;

    if (grade[0] == 'A') score = 4.0;
    else if (grade[0] == 'B') score = 3.0;
    else if (grade[0] == 'C') score = 2.0;
    else if (grade[0] == 'D') score = 1.0;
    else if (grade[0] == 'F') score = 0.0;

    if (grade[1] == '+') score += 0.5;

    return score;
}