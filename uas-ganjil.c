#include <stdio.h>

int main()
{
    int n, i, jumlah;
    jumlah = 0;

    printf("Masukkan jumlah bilangan : ");
    scanf("%d", &n);

    for (i = 1; i <= n * 2; i += 2)
    {
        jumlah += i;

            printf("Jumlah bilangan ganjil dari %d bilangan pertama adalah : %d\n", n, jumlah);
    }
}