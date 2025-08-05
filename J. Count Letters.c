#include <stdio.h>
#include <string.h>

int main()
{
    char S[100000];
    scanf("%s", S);

    int len = strlen(S);

    int f[27] = {0};

    for (int i = 0; i < len; i++)
    {
        char ch = S[i];
        int index = ch - 'a';
        f[index] += 1;
    }

    for (int i = 0; i < 26; i++)
    {
        if (f[i] > 0)
        {
            printf("%c : %d\n", 'a' + i, f[i]);
        }
    }

    return 0;
}