#include <stdio.h>
int main()
{
    int max, bilangan, jumlah;

    printf("Masukkan integer positif : ");
    scanf("%d", &max);
    for (bilangan = 0; bilangan <= max; bilangan++)
    {
        jumlah += bilangan;
    }
    printf("Jumlah 1 sampai %d = %d", max, jumlah);

    return 0;
}