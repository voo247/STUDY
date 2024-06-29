#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {

   int n, m;

   scanf("%d %d", &n, &m);

   if (n >= m)

      printf("%d\n", m / 2);

   else

      printf("%d\n", n / 2);

   return 0;

}