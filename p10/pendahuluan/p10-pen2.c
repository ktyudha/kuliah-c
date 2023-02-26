#include <stdio.h>
#include <string.h>

int main()
{
    char nama[50];
    int a;

    printf("Masukkan nama anda dalam huruf besar\t: ");
    scanf("%s", nama);
    printf("--------------------------------------------\n");
    printf("Nama anda dalam huruf kecil menjadi\t: %s\n", strlwr(nama));
    printf("Nama anda dalam huruf terbalik menjadi\t: %s\n", strrev(nama));
    scanf("%d", &a);

    return 0;
}