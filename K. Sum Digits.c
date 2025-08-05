// #include <stdio.h>

// int main()
// {
//     long long int N;
//     scanf("%lld", &N);

//     long long int d;
//       scanf("%lld", &d);

//     long long int sum = 0;

//     long long int A[N];

//     for (int i = 0; i <= N; i++)
//     {
       
//         A[i]=d%10;
//          d = d /10 ;
//         sum = sum +A[i];
//     }

//     printf("%d", sum);

//     return 0;
// }


#include <stdio.h>

int main()
{
    long long int N;
    scanf("%lld", &N);

    char digits[N + 1]; 
    scanf("%s", digits);

    int sum = 0; 

    for (int i = 0; i < N; i++)
    {
        sum += digits[i] - '0'; 
    }

    printf("%d", sum); 
    return 0;
}
