#include <stdio.h>
void luas();

int main() {
    luas();
}

void luas() {
    double phi, L, K;
    int r;

    printf("Masukkan nilai r (Panjang jari-jari) : ");
    scanf("%d", &r);

    phi = 3.14;
    L = phi * r * r;
    K = 2 * phi * r;

    printf("Luas = %.2f dan Keliling = %.2f", L, K);
}