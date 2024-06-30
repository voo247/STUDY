#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MOD 1000000007

// 모듈러 연산을 수행하는 함수
long long mod(long long x, long long m) {
    return (x % m + m) % m;
}

// 거듭제곱을 모듈러 연산과 함께 계산하는 함수
long long power(long long base, long long exponent, long long m) {
    if (exponent == 0)
        return 1;

    if (exponent % 2 == 0) {
        long long half_pow = power(base, exponent / 2, m);
        return mod(half_pow * half_pow, m);
    }
    else {
        return mod(base * power(base, exponent - 1, m), m);
    }
}

int main() {
    long long n, m;
    scanf("%lld %lld", &n, &m);

    // 경우의 수 계산: m^n - (m-1)^n
    long long result = mod(power(m, n, MOD) - power(m - 1, n, MOD), MOD);

    printf("%lld\n", result);

    return 0;
}
