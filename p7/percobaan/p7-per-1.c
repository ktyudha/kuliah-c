#include <stdio.h>
int operasi();
int main() {
    printf("Jumlah bilangan data genap = %d", operasi());
    return 0;
}

int operasi() {
    int n, i, input, hasil = 0;
    printf("Masukkan data N : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("Masukkan data ke %d = ", i);
        scanf("%d", &input);
        
        // input++; // dengan syarat input ada nilainya //

        if (input % 2 == 0) {
            hasil += input;
        }
    }
    return (hasil);
}