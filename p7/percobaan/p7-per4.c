#include <stdio.h>
void cekAngka();
int main() {
    cekAngka();
}
void cekAngka() {
    int a, b, c;
    printf("Masukkan 3 Buah Bilangan (6 9 8) : ");
    scanf("%d %d %d", &a, &b, &c);
    
    if (a < b) {
        if (b < c) {
            printf("Bilangan C terbesar");
        }
        else {
            printf("Bilangan B terbesar");
        }
    }
    else {
        printf("Bilangan A terbesar");
    }
}