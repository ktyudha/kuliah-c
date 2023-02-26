#include <stdio.h>
int main(){
    int pemakaian = 0, biaya;

    printf("Masukkan pemakaian rekening listrik : ");
    scanf("%d", &pemakaian);

    if(pemakaian <= 100) {
        biaya = 100000;
    } else if (pemakaian > 100 && pemakaian <= 500) {
        biaya = (pemakaian - 100) * 1500 + 100000;
    }else if (pemakaian > 500){ 
        biaya = (pemakaian - 500) * 2000 + 700000;
    }else
        printf("rekening anda tidak valid");

    printf("Biaya pemakaian %d", biaya);
}