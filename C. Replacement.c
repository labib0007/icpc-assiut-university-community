#include <stdio.h>

int main()
{
    long long int N;
    scanf("%lld", &N);
    long long int A[N];

    for (long long int j = 0; j < N; j++)
    {
        scanf("%lld", &A[j]);
    }

    for (long long int i = 0; i < N; i++)
    {
        if (A[i] > 0)
        {
            A[i] = 1;
        }
        else if (A[i] < 0)
        {
            A[i] = 2;
        }

        printf("%lld ", A[i]);
    }

    return 0;
}