#include <stdio.h>

int main() {
    char ulangi='y';
    int bilangan, pembagi, modulo;

    while (ulangi == 'y' || ulangi == 'Y'){
        printf("Masukkan suatu bilangan \n");
        scanf("%d",&bilangan);
        printf("Masukkan bilangan pembagi (2/3/4/5) \n");
        scanf("%d", &pembagi);

        modulo = bilangan % pembagi;

        printf("Bilangan yang dipilih\t: %d \n", bilangan);
        printf("Bilangan pembagi\t: %d \n", pembagi);
        
        if (modulo == 0)
            printf("Sisa bagi\t\t: Tidak ada \n");
        else 
            printf("Sisa bagi\t\t: %d \n", modulo);

        printf("Apakah anda ingin meneruskan? (Y/T) : ");
        scanf(" %c",&ulangi);

    }
    printf("\n---Perulangan selesai---\n");
    
return 0;
}