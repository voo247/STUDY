#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int whatIsMaxScore(double[], int);
double whatIsNewAverage(double arr[], int n, int m);

int main() {
    double arr[1000];
    int size;

    scanf("%d", &size);

    for (int i = 0, score; i < size; i++){
        scanf("%d", &score);
        arr[i] = score;
    }

    int max = whatIsMaxScore(arr, size);

    printf("%lf", whatIsNewAverage(arr, size, max));

    return 0;
}

int whatIsMaxScore(double arr[], int n) {
    int max = -999;

    for (int i = 0; i < n; i++)
        if (max < arr[i])
            max = arr[i];

    return max;
}


double whatIsNewAverage(double arr[], int n, int m) {
    double sum = 0;

    for (int i = 0; i < n; i++) {
        arr[i] = arr[i] / m * 100;
        sum += arr[i];
    }

    return sum / n;
}