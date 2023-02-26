#include <stdio.h>

int main()
{
    int A[3][2], B[3][2], i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("input data matrik A[%i][%i] :", i, j);
            scanf("%i", &A[i][j]);
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            B[i][j] = A[i][j] * 5;
        }
    }
    printf("\nHasil matrik x 5 :\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
            printf("%6i", B[i][j]);
        printf("\n\n");
    }
}