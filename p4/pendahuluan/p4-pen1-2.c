#include <stdio.h>
int main(){
    int noHari = 0;

    printf("Hari ke : ");
    scanf("%i", &noHari);

    if (noHari == 1) {
        printf("Minggu");
    } else if (noHari == 2) {
      printf("Senin");  
    } else if (noHari == 3) {
      printf("Selasa");  
    } else if (noHari == 4) {
      printf("Rabu");  
    } else if (noHari == 5) {
      printf("Kamis");  
    } else if (noHari == 6) {
      printf("Jum'at");  
    }    
    return 0; 
}