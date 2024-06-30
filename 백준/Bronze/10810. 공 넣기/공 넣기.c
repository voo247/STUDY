#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int arr[100] = {0};
    int n, m;

    scanf("%d %d", &n, &m);

    for (int cnt = 0; cnt < m; cnt++) {
        int i, j, k;

        scanf("%d %d %d", &i, &j, &k);

        for (int tmp = i - 1; tmp < j; tmp++) {
            if (arr[tmp] != 0) arr[tmp] = 0;
            arr[tmp] = k;
        }
    }

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}