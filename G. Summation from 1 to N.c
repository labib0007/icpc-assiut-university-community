#include <stdio.h>

int main()
{

  long long  int N,i;
    scanf("%lld", &N);

    long long int sum ;

    // for ( i = 1; i <= N; i++)
    // {
    //     sum = sum + i;
    // }

    sum = (N * (N+1))/2;

    printf("%lld\n", sum);

    return 0;
}