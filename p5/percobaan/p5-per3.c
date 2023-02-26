#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int angka, input;
    srand(time(NULL));
    angka = rand() % 50 + 1;

    printf("(Misalkan angka hasil pengacakan adalah)\n");

    while (angka != input)
    {
        printf("Angka tebakan : ");
        scanf("%d", &input);

        if (angka > input)
        {
            printf("Tebakan terlalu kecil\n");
        }
        else if (angka < input)
        {
            printf("Tebakan terlalu besar\n");
        }
        else 
        {
            printf("Tebakan benar\n");
        }
    }
    return 0;
}