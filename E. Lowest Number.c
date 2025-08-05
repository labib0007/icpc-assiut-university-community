#include <stdio.h>

int main()
{
    long long int N, position = 1;
    scanf("%lld", &N);
    long long int A[N];
    long long int i, j;

    for (j = 0; j < N; j++)
    {
        scanf("%lld", &A[j]);
    }

    long long int min = A[0];

    for (i = 0; i < N; i++)
    {

        if (min > A[i])
        {
            min = A[i];
            position = i + 1;
        }
    }

    printf("%lld %lld\n", min, position);

    return 0;
}