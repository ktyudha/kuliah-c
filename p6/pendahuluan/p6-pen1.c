#include <stdio.h>
int main()
{
    int b, k, baris, kolom;

    printf("Masukkan Jumlah baris : ");
    scanf("%i", &baris);
    printf("Masukkan Jumlah kolom : ");
    scanf("%i", &kolom);

    for (b = 1; b <= baris; b++)
    {
        for (k = 1; k <= kolom; k++)
        {
            printf(" A ");
        }
        printf("\n");
    }
    return 0;
}