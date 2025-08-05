#include<stdio.h>

int main(){
    char F1[100];
    char S1[100];
    char F2[100];
    char S2[100];

    scanf("%s %s %s %s",F1,S1,F2,S2);

    int a = strcmp(S1,S2);

    if(a == 0)
    {
        printf("ARE Brothers");
    }
    else
    printf("NOT");


    return 0;
}