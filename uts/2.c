#include <stdio.h>
int main(){
    int bilDeret, i,hasil,jumlah=0;
    printf("Masukkan jumlah bilangan deret: ");
    scanf("%d", &bilDeret);

    bilDeret--;
    for (i = 0; i <= bilDeret; i++)
    {
        hasil=3+(i*5);
        printf("%d ",hasil);
        jumlah+= hasil;
    }
    printf("\n%d",jumlah);
    return 0;
}