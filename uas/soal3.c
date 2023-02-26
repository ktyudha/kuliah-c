#include <stdio.h>
#include <string.h>

void main()
{
    char banding, datGabung, data1[255], data2[255];
    int jumChar1, jumChar2, jumSpasi1 = 0, jumSpasi2 = 0, nilBanding = 0;

    printf("Masukkan data pertama = ");
    gets(data1);
    printf("Masukkan data kedua = ");
    gets(data2);

    banding = strcmp(data1, data2);
    if (banding == 0)
    {
        nilBanding = 0;
    }
    else
    {
        nilBanding = 1;
    }

    jumChar1 = strlen(data1) - 1;
    jumChar2 = strlen(data2);

    for (int i = 0; i <= jumChar1; i++)
    {
        if (data1[i] == ' ')
        {
            jumSpasi1++;
        }
    }

    for (int j = 0; j <= jumChar2; j++)
    {
        if (data2[j] == ' ')
        {
            jumSpasi2++;
        }
    }
    jumChar1 = jumChar1 - jumSpasi1;
    jumChar2 = jumChar2 - jumSpasi2;
    printf("Jika dibandingkan nama pertama dan kedua maka nilainya menjadi %d\n", nilBanding);
    printf("Panjang karakter dari data pertama adalah %d dan jumlah spasi %d, sedangkan panjang karakter dari data kedua adalah %d dan jumlah spasi %d\n", jumChar1, jumSpasi1, jumChar2, jumSpasi2);
    printf("Jika nama tersebut digabung menjadi : \n%s %s", data1, data2);
}