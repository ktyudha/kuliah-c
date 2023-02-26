#include <stdio.h>
int main()
{
    char huruf;
    int angka;

    printf("Masukkan nilai huruf (A/B/C/D/E): ");
    scanf("%c", &huruf);

    switch (huruf)
    {
    case 'A':
        angka = 4;
        printf("Nilai angka %d", angka);
        break;
    case 'B':
        angka = 3;
        printf("Nilai angka %d", angka);
        break;
    case 'C':
        angka = 2;
        printf("Nilai angka %d", angka);
        break;
    case 'D':
        angka = 1;
        printf("Nilai angka %d", angka);
        break;
    case 'E':
        angka = 0;
        printf("Nilai angka %d", angka);
        break;

    default:
        printf("Huruf yang anda inputkan tidak sesuai.");
        break;
    }
    return 0;
}