#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    long long int X, Y;

    for (int i = 0; i < T; i++)
    {
        long long int sum = 0;
        scanf("%lld %lld", &X, &Y);

     
     if (X < Y)
        {
            for (long long int j = X + 1; j < Y; j++)
            {
                if (j % 2 != 0)
                {
                    sum += j;
                }
            }
        }

        else
        {
            for (long long int j = Y + 1; j < X; j++)
            {
                if (j % 2 != 0)
                {
                    sum += j;
                }
            }
        }

        printf("%lld\n", sum);
    }

    return 0;
}