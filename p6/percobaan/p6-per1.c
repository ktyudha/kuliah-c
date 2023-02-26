#include <stdio.h>
#include <stdlib.h>

int main() {
    int a,b,x, n;

    printf("masukkan nilai : ");
    scanf("%i", &n);

    for (x = n; x > 0 ; x--)
    {
        for (a = x-1 ; a > 0; a--)
        {
            printf(" ");
        }
        for (b = n-(x-1); b > 0; b--)
        {
            printf("*");
        }
        printf("\n");
    }
    for (x = 0; x < n-1 ; x++)
    {
        for (a = 0; a < x+1 ; a++)
        {
            printf(" ");
        }
        for (b = 0; b < n-(x+1); b++)
        {
            printf("*");
        }
          printf("\n");
    }
    
}