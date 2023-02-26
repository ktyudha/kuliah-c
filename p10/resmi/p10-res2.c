#include <stdio.h>
#include <string.h>

int main()
{
    char kata[100];
    int b, c, d;

    printf("Masukkan kata : ");
    gets(kata);

    b = strlen(kata);
    for (c = 0; c < b; c++) {
        for (d = 0; d <= c; d++) {
            printf("%c", kata[d]);
        }
        printf("\n");
    }
    printf("\n");
}