#include <stdio.h>

void main()
{
    int nilai[3];
    int length, sum;

    printf("Masukkan nilai matematika : ");
    scanf("%d", &nilai[0]);
    printf("Masukkan nilai fisika : ");
    scanf("%d", &nilai[1]);
    printf("Masukkan nilai kimia : ");
    scanf("%d", &nilai[2]);

    length = sizeof(nilai) / sizeof(*nilai);
    sum = 0;
    
    for (int i = 0; i < length; i++)
        sum += nilai[i];
    
    float avg = (float)sum / (float)length;
    printf("Nili rata-ratanya adalah %.2f", avg);
}