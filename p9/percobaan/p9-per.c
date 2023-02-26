#include <stdio.h>

int main() {
    char input, karakter[256];
    int hitung[256];
    int a, b, c = 0, n, count;

    printf("Masukkan Jumlah Karakter yang akan dihitung: ");
    scanf("%d", &n);

    for (a = 1; a <= n; a++) {
        printf("Masukkan Karakter Ke - %d\t: ", a);
        scanf("\n%c", &input);

        for (b = 0; b <= c; b++) {
            count = 1;
            if (input == karakter[b]) {
                count = 0;
                hitung[b]++;
                break;
            }
        }
        if (count == 1) {

            karakter[c] = input;
            hitung[c] = 1;
            c++;
        }
    }
    printf("\n");
    for (a = 0; a < c; a++) {
        printf("Frekuensi %c=%d\n", karakter[a], hitung[a]);
    }
    return 0;
}