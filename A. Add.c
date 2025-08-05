#include <stdio.h>
#include <stdlib.h>

int main()
{
    int X,Y;
    scanf("%d %d", &X, &Y);

    int *a = &X;

    int *b = &Y;

    int sum = *a + *b;

    int *summation = &sum;

    printf("%d\n", *summation);



    return 0;

}