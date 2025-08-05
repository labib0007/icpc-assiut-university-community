#include <stdio.h>

int main()
{

    int t, w, h;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        scanf("%d %d", &w, &h);

        if (w == h)
        {
            printf("Square");
        }
        else
        {
            printf("Rectangle");
        }
    }

    return 0;
}