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
        if (A[i] <=10)
        {
                printf("A[%lld] = %lld\n",i,A[i]);
        }
         
    }

    return 0;
}