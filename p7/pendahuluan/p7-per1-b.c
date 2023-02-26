#include <stdio.h>

int luas(double *x, double *y);

int main() {
    double b, c;
    luas(&b, &c);
    printf("luas = %.2f\nKeliling = %.2f", b, c);
    return 0;
}
int luas(double *x, double *y) {
    int r;
    double phi = 3.14;

    printf("Masukkan nilai jari jari : ");
    scanf("%d", &r);
    *x = phi * r * r;
    *y = 2 * phi * r;
}
