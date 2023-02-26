#include <stdio.h>

int main() {
    char ulangi, keterangan;
    int counter = 0, bilangan, pembagi, modulo;

    while (ulangi == 'y' || ulangi == 'Y'){
        printf("Masukkan suatu bilangan \n");
        scanf("%d",&bilangan);
        printf("Masukkan bilangan pembagi (2/3/4/5) \n");
        scanf("%d", &pembagi);

        modulo = bilangan % pembagi;

        printf("Bilangan yang dipilih : %d \n", bilangan);
        printf("Bilangan pembagi : %d \n", pembagi);
        if (modulo == 0) {
            printf("Sisa bagi : Tidak ada \n");
        } else {
            printf("Sisa bagi : %d \n", modulo);
        }

        printf("Apakah anda ingin meneruskan? (Y/T) : ");
        scanf(" %c",&ulangi);

        counter++;
    }
    printf("\n----------------\n");
    printf("Perulangan selesai");
    return 0;
}