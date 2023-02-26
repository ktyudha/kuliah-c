#include <stdio.h>
#include <string.h>

void main(){
    char nama[100][100], temp[100];
    int h,i,j,k=0,l=0;
    printf("Masukkan Jumlah nama : ");
    scanf("%d",&h); getchar();
    printf("Sebelum diurutkan \n");

    for (i = 0; i < h; i++) {
        printf("Nama ke %d : ", i+1);
        gets(nama[i]);
    }
    for (i = 0; i < 3; i++) {
        for (j = i+1; j < h; j++) {
            if (strcmp(nama[i], nama[j])> 0)
            {
                strcpy(temp, nama[i]);
                strcpy(nama[i], nama[j]);
                strcpy(nama[j], temp);
            }
        }
    }
    printf("Sesudah diurutkan : \n");
    for (i = 0; i < h; i++) {
        printf("Nama ke-%d : %s\n",i+1, nama[i]);
    }
}