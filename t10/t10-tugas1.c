#include <stdio.h>
#include <string.h>
#include <ctype.h>

void main()
{
    char kalimat;
    int hurufBesar = 0, hurufKecil = 0;
    
    printf("Masukkan kalimat : ");
    while ((kalimat = getchar())!='\n')
    {
        if (kalimat >= 'A' && kalimat <= 'Z')
        {
            hurufBesar++;
        } else if (kalimat >= 'a' && kalimat <= 'z')
        {
            hurufKecil++;
        }
    }
  
    printf("Jumlah huruf kecil\t: %d\n", hurufKecil);
    printf("Jumlah huruf kapital\t: %d", hurufBesar);
}