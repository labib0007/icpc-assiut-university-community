#include <stdio.h>

int main()
{

    int N;
    scanf("%d", &N);
    int A[N];
    int counter = 0;

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    int min = A[0];

    for (int j = 0; j < N; j++)
    {
        if (A[j] < min)
        {
            min = A[j];
        }

        
    }

     for (int j = 0; j < N; j++)
    {
        if (A[j]== min)
        {
            counter++;
        }   
    }

    if(counter%2==0)
    {
        printf("Unlucky");
    }
    else{
        printf("Lucky");
    }

    return 0;
}
    