#include <stdio.h>

int main()
{
    long long int N;
    scanf("%lld", &N);

    if (N <= 1)
    {
        printf("-1\n");
    }
    else
    {
        for (long long int i = 2; i <= N; i += 2)
        {
            printf("%lld\n", i);
        }
    }

    return 0;
}