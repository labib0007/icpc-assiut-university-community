#include <stdio.h>
#include <stdlib.h>

int main()
{
    int X,Y;
    scanf("%d %d", &X, &Y);

    int *a = &X;
    int *b = &Y;

    int temp = *a;
    *a = *b;
    *b = temp;
    
    printf("%d %d\n", X,Y);


    return 0;

}