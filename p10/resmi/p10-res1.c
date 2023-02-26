#include <stdio.h>
#include <string.h>

void main() {
    char kata[100];
    int b, c, d;

    printf("Masukkan kata : ");
    gets(kata);

    b = strlen(kata);
    for (c = b; c > 0; c--) {
        for (d = 0; d < c; d++) {
            printf("%c", kata[d]);
        }
        printf("\n");
    }
    printf("\n");
}