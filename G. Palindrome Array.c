#include <stdio.h>

int main()
{
    long long int N, position = 1;
    scanf("%lld", &N);
    long long int A[N];
    long long int i, j, k, counter = 0;

    for (i = 0; i < N; i++)
    {
        scanf("%lld", &A[i]);
    }

    for (j = 0, k = N - 1; j < N; j++, k--)
    {

        if (A[j] == A[k])
        {
            counter++;
        }
    }

    if (counter == N)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}