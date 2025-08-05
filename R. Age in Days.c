#include <stdio.h>

int main()
{
    long long int N, year, month, day;
    scanf("%lld", &N);

    year = N / 365;
    printf("%d years\n", year);

    month = (N % 365) / 30;
    printf("%d months\n", month);

    day = (N % 365) % 30;
    printf("%d days\n", day);

    return 0;
}