#include <stdio.h>
int main(){
    int nilai = 0;
    char klasifikasi;

    printf("Masukkan Nilai : ");
    scanf("%d", &nilai);

    if (nilai > 80) {
        klasifikasi = 'A';
    } else if (nilai > 70 && nilai <= 80) {
        klasifikasi = 'B';
    } else if (nilai > 60 && nilai <= 70) {
        klasifikasi = 'C';
    } else if (nilai > 50 && nilai <= 60) {
        klasifikasi = 'D';
    } else if (nilai <= 50) {
        klasifikasi = 'E';
    } else {
        printf("Maaf input nilai 0-100");
    }
    printf("%c", klasifikasi);
    return 0;
}