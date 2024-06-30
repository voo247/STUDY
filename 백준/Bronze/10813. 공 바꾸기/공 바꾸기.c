#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int arr[100] = {0};
    int n, m;

    scanf("%d %d", &n, &m);
    
    for (int i = 0; i < n; i++)
        arr[i] = i + 1;

    for (int cnt = 0; cnt < m; cnt++) {
        int i, j, tmp;

        scanf("%d %d", &i, &j);

        tmp = arr[i - 1];
        arr[i - 1] = arr[j - 1];
        arr[j - 1] = tmp;
    }

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}