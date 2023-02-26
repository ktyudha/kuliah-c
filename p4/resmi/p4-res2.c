#include <stdio.h>
void main()
{
    char huruf;
    int angka;

    printf("Masukkan nilai huruf : ");
    scanf("%c", &huruf);

    if (huruf == 'A') {
        angka = 4;
        printf("Nilai angka %d", angka);
    } else if (huruf == 'B') {
        angka = 3;
        printf("Nilai angka %d", angka);
    } else if (huruf == 'C') {
        angka = 2;
        printf("Nilai angka %d", angka);
    } else if (huruf == 'D') {
        angka = 1;
        printf("Nilai angka %d", angka);
    } else if (huruf == 'E') {
        angka = 0;
        printf("Nilai angka %d", angka);
    } else
        printf("Huruf yang anda masukkan tidak sesuai.");

}