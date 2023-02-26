#include <stdio.h>
#include <conio.h>

int main() {
    int jumMahasiswa, nil, totNil = 0, i, j, k, l;
    int jumNil;
    int nilai[255];
    float avg[255];
    char nama[100][100];

    printf("Masukkan Jumlah Mahasiswa : ");
    scanf("%d", &jumMahasiswa);
    getchar();
    for (i = 0; i < jumMahasiswa; i++) {
        printf("Nama Mahasiswa ke - %d : ", i + 1);
        scanf("%s", nama[i]);
        getchar();

        printf("Jumlah Nilai : ");
        scanf("%d", &jumNil);
        getchar();

        for (j = 0; j < jumNil; j++) {
            printf("Nilai ke - %d : ", j + 1);
            scanf("%d", &nilai[j]);
            getchar();
            totNil += nilai[j];
        }
        avg[i] = (float)totNil / (float)jumNil;
        printf("\n");
    }
    for (k = 0; k < jumMahasiswa; k++) {
        printf("Nilai %s rata-rata %.2f", nama[k], avg[k]);

        printf("\n");
    }
}