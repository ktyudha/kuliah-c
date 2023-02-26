#include <stdio.h>
#include <conio.h>

int main()
{
    char nama[255];
    int nilai[100];
    int i, jumNil, totNil;
    float avg;

    printf("Nama Mahasiswa : ");
    scanf("%s", nama);

    printf("Jumlah nilai = ");
    scanf("%d", &jumNil);

    for (i = 0; i < jumNil; i++)
    {
        printf("Nilai ke - %d : ", i + 1);
        scanf("%d", &nilai[i]);
        totNil += nilai[i];
    }
    avg = (float)totNil / (float)jumNil;
    printf("%s, nilai rata rata adalah %.1f", nama, avg);
}
