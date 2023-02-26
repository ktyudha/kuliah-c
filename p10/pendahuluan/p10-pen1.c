#include <stdio.h>
#include <string.h>

int main() {

  char kalimat[255];
  int jumlah;

  printf("Masukkan sebuah string : " );
  fgets(kalimat, sizeof(kalimat), stdin);

  jumlah = strlen(kalimat)-1;

  printf("Jumlah karakter adalah %d\n", jumlah);

  return 0;
}