#include <stdio.h>

int jumBilGenap(int x);
void main()
{
    int bil;

    printf("Masukkan jumlah bilangan : ");
    scanf("%d", &bil);

    printf("Jumlah bilangan genap dari %d bilangan pertama adalah : %i", bil, jumBilGenap(bil));
}
int jumBilGenap(int x)
{
    int y = 1;
    int z = 0;
    for (int i = 0; i < x; i++)
    {
        z += y;
        y += 2;
    }
    return z;
}