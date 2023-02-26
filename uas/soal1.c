#include <stdio.h>

struct multiDimensionalArray
{
    int arr[2][2];
};

struct multiDimensionalArray matriksJumlah(int x[][2], int y[][2])
{
    int baris, kolom;
    struct multiDimensionalArray hasil;

    for (baris = 0; baris < 2; baris++)
    {
        for (kolom = 0; kolom < 2; kolom++)
        {
            hasil.arr[baris][kolom] = (-3 * x[baris][kolom]) + (2 * y[baris][kolom]);
        }
    }

    return hasil;
}

void main()
{
    int a[2][2] = {5, 3, 4, 2}, b[2][2] = {2, 2, 3, 5};
    int baris, kolom;
    struct multiDimensionalArray jumlah = matriksJumlah(a, b);

    for (baris = 0; baris < 2; baris++)
    {
        for (kolom = 0; kolom < 2; kolom++)
        {
            printf(" %d ", jumlah.arr[baris][kolom]);
        }
        printf("\n");
    }
}
