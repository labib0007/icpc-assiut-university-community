// #include <stdio.h>

// int main()
// {

//     int A, B, C;
//     scanf("%d %d %d", &A, &B, &C);

//     int *a = &A;

//     int *b = &B;

//     int *c = &C;

//     int min;
//     int max;

//     if ((*a > *b && *a > *c) || (*a == *b && *a > *c))
//     {
//         max = *a;

//         if (*b < *c)
//         {
//             min = *b;
//         }
//         else if (*c < *b)
//         {
//             min = *c;
//         }
//         else
//         {
//             min = *c;
//         }
//     }
//     else if ((*b > *a && *b > *c) || (*b == *c && *b > *a))
//     {
//         max = *b;
//         if (*a < *c)
//         {
//             min = *a;
//         }
//         else if (*c < *a)
//         {
//             min = *c;
//         }
//         else
//         {
//             min = *c;
//         }
//     }
//     else if ((*c > *a && *c > *b) || (*a == *c && *a > *b))
//     {
//         max = *c;
//         if (*b < *a)
//         {
//             min = *b;
//         }
//         else if (*a < *b)
//         {
//             min = *a;
//         }
//         else
//         {
//             min = *a;
//         }
//     }

//     else
//     {
//         min = *a;
//         max = *a;
//     }

//     printf("%d %d", min, max);

//     return 0;
// }

#include <stdio.h>

int main() {
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);

    int *a = &A, *b = &B, *c = &C;
    int min = *a, max = *a;

    if (*b > max) max = *b;
    if (*c > max) max = *c;

    if (*b < min) min = *b;
    if (*c < min) min = *c;

    printf("%d %d", min, max);

    return 0;
}