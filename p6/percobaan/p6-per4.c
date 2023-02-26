#include <stdio.h>
#include <stdlib.h>
int main(){

int varA, varB;
double jum;

printf("Masukkan Bilangan (A) : ");
scanf("%d", &varA);
printf("Masukkan Bilangan (B) : ");
scanf("%d", &varB);

if (varB==0)goto tak_berhingga;{
    jum = varA/varB;
    printf("%d dibagi dengan %d adalah %.2f \n", varA,varB,jum);
}

tak_berhingga:
printf("%d dibagi dengan nol adalah tak berhingga \n",varA);
}