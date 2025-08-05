#include <stdio.h>

int main()
{

  int N,M;

    scanf("%d %d", &N, &M);

    int A[N];

    int f[100000];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);

        f[A[i]] += 1;
    }
    for (int i = 1; i <= M; i++)
    {
        printf("%d\n", f[i]);
    }

    return 0;
}