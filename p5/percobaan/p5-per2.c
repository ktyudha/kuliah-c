#include <stdio.h>
int main()
{
    char ulangi = 'Y';
    int no, bil, jum = 0;
    no = 1;

    while (ulangi == 'Y' || ulangi == 'y')
    {
        printf("Masukkan bilangan ke-%d : ", no);
        scanf("%d", &bil);
        jum = jum + bil;
        no++;
        printf("Apakah anda ingin meneruskan? (y/t) : ");
        scanf(" %c", &ulangi);
    }

    if (ulangi == 'T' || ulangi == 't')
        printf("Total bilangan = %d", jum);
    else
        printf("Input anda tidak sesuai");
}