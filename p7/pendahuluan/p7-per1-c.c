#include <stdio.h>

int jari();
int main() {
    int r;
    double L, K, phi;

    phi = 3.14;

    r = jari();
    L = phi * r * r;
    K = 2 * phi * r;

    printf("Luas = %.2f\nKeliling = %.2f", L, K);
}
int jari() {
    int r;
    printf("Masukkan nilai jari-jari : ");
    scanf("%d", &r);
    return (r);
}