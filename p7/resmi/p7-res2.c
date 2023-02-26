#include <stdio.h>
int ganjil(int);
int main() {
    int a, kecil;
    printf("Masukkan Bilangan sembarang : ");
    scanf("%d", &a);
    if (a % 2 == 1) {
        printf("Bilangan Ganjil\n");
        kecil = ganjil(a);
    } else {
        printf("Bilangan Genap\n");
        kecil = ganjil(a);
    }

    printf("Sisa hasil bagi %d", kecil);
}
int ganjil(int x) {
    if (x % 2 == 1) {
        return (1);
    } else {
        return (0);
    }
}
