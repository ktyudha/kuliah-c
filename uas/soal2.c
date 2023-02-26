#include <stdio.h>
int main()
{
    int a, b, c, jumBil, bilangan[255];

    printf("Program pengurutan angka dari yang terbesar\n\n");
    printf("Masukkan jumlah bilangan yang mau diurutkan = ");
    scanf("%d", &jumBil);
    for (a = 0; a < jumBil; a++)
    {
        printf("Masukkan angka ke-%d\t:", a + 1);
        scanf("%d", &bilangan[a]);
    }
    for (a = 0; a < jumBil; a++)
    {
        for (b = 0; b < jumBil; b++)
            if (bilangan[a] >= bilangan[b])
            {
                c = bilangan[b];
                bilangan[b] = bilangan[a];
                bilangan[a] = c;
            }
    }
    printf("\nUrutan bilangan dari yang terbesar: ");
    for (a = 0; a < jumBil; a++)
        printf("%d,", bilangan[a]);

    return 0;
}