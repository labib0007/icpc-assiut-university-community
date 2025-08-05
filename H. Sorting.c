#include <stdio.h>

int main()
{

    int N;
    scanf("%d", &N);
    int A[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    int max;

    for (int j = 0; j < N; j++)
    {

        for (int k = 0; k < N - 1 -j; k++)
        {
            if (A[k] > A[k + 1])
            {
                max = A[k];
                A[k] = A[k + 1];
                A[k + 1] = max;
            }
        }
    }

    for (int i = 0; i < N; i++)
    {
        printf("%d ", A[i]);
    }

    return 0;
}