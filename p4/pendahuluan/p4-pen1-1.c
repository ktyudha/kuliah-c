#include <stdio.h>
int main()
{
    int nilai = 0;

    printf("Masukkan nilai Ujian : ");
    scanf("%i", &nilai);

    if (nilai >= 70)
        printf("Anda Lulus");
    else
        printf("Anda tidak lulus");
    return 0;
}