#include <stdio.h>
#include <string.h>
#include <ctype.h>

void main() {
    char kalimat[255];
    int i,j;
    printf("Masukkan sebuah kalimat : ");
    gets(kalimat);
    j = strlen(kalimat);
    printf("Hasilnya : ");

    for (i = 0; i < j; i++)
    {
         if (kalimat[i] == ' ')
        {
            printf("\n");
        } else {
            printf("%c", kalimat[i]);
        }
    }
        puts("");
        printf(".");
    
    // while ((kalimat = getchar()) !='.')
    // {
    //     if (kalimat = ' ')
    //     {
    //         printf("\n");
    //     }
    //     printf("%s", kalimat);
        
    // }
    // printf("%s", kalimat);
}