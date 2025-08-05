#include <stdio.h>

int main()
{
    long long int N;
     scanf("%lld", &N);
    long long int a[N];

    long long int evcount = 0, odcount = 0, pscount = 0, ngcount = 0;

    for (long long int i = 0; i < N; i++)
    {
        scanf("%lld", &a[i]);
    }

    for (long long int j = 0; j < N; j++)
    {
        if (a[j] % 2 == 0)
        {
            evcount++;
            // printf("%lld\n", evcount);
        }
        else
        {
            odcount++;

            // printf("%lld\n", odcount);
        }

        if (a[j] > 0)
        {
            pscount++;

            // printf("%lld\n", pscount);
        }
        if (a[j] < 0)
        {
            ngcount++;

            // printf("%lld\n", ngcount);
        }
    }

    printf("Even: %lld\n", evcount);

    printf("Odd: %lld\n", odcount);

    printf("Positive: %lld\n", pscount);

    printf("Negative: %lld\n", ngcount);

    return 0;
}