#include <stdio.h>
#include <string.h>
#include <conio.h>

int hitungChar(char *);
int main()
{
    char kalimat[255];

    printf("Masukkan sebuah string : ");
    fgets(kalimat, sizeof(kalimat), stdin);

    printf("Jumlah karakter adalah %d\n", hitungChar(kalimat));

    return 0;
}

int hitungChar(char *x)
{
    int jumlah;
    jumlah = strlen(x) - 1;
    return (jumlah);
}