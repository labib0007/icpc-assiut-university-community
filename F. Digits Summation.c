#include <stdio.h>

int main()
{
    long long int N, M;

    scanf("%lld %lld", &N, &M);

    N = N % 10;
    M = M % 10;

    printf("%lld\n", N + M);

    return 0;
}