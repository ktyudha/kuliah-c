#include <stdio.h>
#include <string.h>
#include <ctype.h>

void main(){
    char nama[255];
    printf("Masukkan nama Anda : ");
    gets(nama);

    printf("Nama dengan huruf Kapital\t\t: %s\n",strupr(nama));
    printf("Nama dengan urutan huruf terbalik\t: %s",strrev(nama));
}
