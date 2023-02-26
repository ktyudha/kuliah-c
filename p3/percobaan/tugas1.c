
#include <stdio.h>

int main() {
    char nama[25];
    int umur, no_telfon;

    printf("Masukkan data diri anda\n");
    printf("Nama : ");
    scanf("%s",nama);
    
    printf("Umur : ");
    scanf("%d", &umur);
    
    printf("No Telfon : ");
    scanf("%d", &no_telfon);
    
    printf("Hello %s, umur %d, no telp %d \n", nama, umur, no_telfon);
    printf("Bagaiamana kabar anda hari ini?");
    
    return 0;
}
