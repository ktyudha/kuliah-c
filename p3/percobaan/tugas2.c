#include <stdio.h>

int main() {
    int kecepatan, waktu, jarak;
    
    printf("Masukkan kecepatan dan waktu mobil anda\n");
    printf("Kecepatan (m/detik) : ");
    scanf("%i",&kecepatan);
    
    printf("Waktu(detik) : ");
    scanf("%i",&waktu);
    
    jarak = kecepatan*waktu;
    printf("Jadi jarak tempuh (m) anda adalah %i meter", jarak );

    return 0;
}