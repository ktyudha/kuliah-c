#include <stdio.h>
#include <string.h>
#include <ctype.h>

void main()
{
    char kalimat;
    int jumKal=0, spasi = 0;
    printf("Masukkan sebuah kalimat : ");
    while ((kalimat = getchar()) != '\n')
    {
        if (kalimat == ' ')
        {
            spasi++;
        }
        jumKal++;
    }
    printf("Panjang kalimat\t: %d\n", jumKal);
    printf("Jumlah spasi\t: %d", spasi);
}