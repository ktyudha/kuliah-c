#include <stdio.h>
int main()
{
    int baris, kolom;

    for (baris = 1; baris <= 2; baris++)
    {
        for (kolom = 1; kolom <= 3; kolom++)
            printf(" * ");
        for (kolom = 1; kolom <= 4; kolom++)
            printf(" - ");
        printf("\n");
    }
    for (baris = 1; baris <= 2; baris++)
    {
        for (kolom = 1; kolom <= 7; kolom++)
            printf(" - ");
        printf("\n");
    }
    return 0;
}