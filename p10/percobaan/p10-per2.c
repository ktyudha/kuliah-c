#include <stdio.h>
#define N 255

void pengganti(char *, char, char);
int main() {
    char data[N], find, ganti;

    printf("Masukkan sebuah String : ");
    scanf("%[^\n]", data);

    printf("Huruf yang akan diganti\t: ");
    getchar(); scanf("%c", &find);

    printf("Huruf pengganti\t\t: ");
    getchar(); scanf("%c", &ganti);

    pengganti(data,find,ganti);
    printf("Hasil pengganti\t\t: %s\n\n", data);
    
    return 0;
}

void pengganti(char *data, char find, char pengganti) {
    int i=0;
    while(*data !='\0'){
        *data = ((*data == find) ? pengganti : *data);
        data++;
        i++;
    }
}