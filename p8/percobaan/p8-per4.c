#include <stdio.h>

int f_to_i(int);
int i_to_cm(int);
int c_to_m(int);

int kaki, inchi;
float cm, meter;

int main() {
    printf("Masukkan ukuran kaki(feet) : ");
    scanf("%d", &kaki);

    f_to_i(kaki);
    i_to_cm(kaki);
    c_to_m(kaki);

    return 0;
}

int f_to_i(int b) {
    inchi = b * 12;
    printf("Ukuran kaki dalam Inchi = %d Inch\n", inchi);
}
int i_to_cm(int b) {
    cm = b * 12 * 2.45; 
    printf("Ukuran kaki dalam cm = %.2f cm\n", cm);
}
int c_to_m(int b) {
    meter  = b * 12 * 2.45 / 100;
    printf("Ukuran kaki dalam Meter = %.3f m\n", meter);
}