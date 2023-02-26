#include <stdio.h>

int main(){
    int i, no, jumMhs, nilai;
    float avg, totNil;
    no=1;

    printf("Banyaknya data?");
    scanf("%i", &no);

    for (i = 1; i <= no; i++)
    {
        printf("data ke %i?",i);
        scanf("%d", &nilai);
        if (nilai < 0){
            i--;
           continue;
        }
        
        jumMhs = no;
        totNil += nilai;
        avg = totNil/jumMhs;
    }
    printf("Banyaknya mahasiswa \t\t = %d \n",no);
    printf("total Nilai mahasiswa \t\t = %f\n", totNil);
    printf("rata-rata nilai mahasiswa \t = %f", avg);
}