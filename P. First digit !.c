#include <stdio.h>

int main()
{
    int X;
    scanf("%d", &X);

    int first_digit = X;

    for (int i = 1; first_digit > 0; i++)
    {
        first_digit = first_digit / 10;
        //    printf("%d\n", first_digit);
        if(first_digit<10)
        break;
     
    }

    if (first_digit % 2 == 0)
    {
        printf("EVEN");
    }

    else
    {
        printf("ODD");
    }

    return 0;
}