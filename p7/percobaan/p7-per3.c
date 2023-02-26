#include <stdio.h>
void tukar(int *x, int *y);

int main(){
    int a, b;
    printf("Masukkan bilangan A : ");
    scanf("%d",&a);
    
    printf("Masukkan bilangan B : ");
    scanf("%d",&b);

    // menampilkan
    printf("\nBilangan Sebelum fungsi\n\n");
    printf("Bilangan A = %d\n",a);
    printf("Bilangan B = %d\n\n",b);
    
    tukar(&a,&b);
    // out sesudah fungsi
    printf("Bilangan Setelah fungsi\n\n");
    printf("Bilangan A = %d\n",a);
    printf("Bilangan B = %d\n",b);
    
    return 0;
}
void tukar(int *x, int *y){
    int z;
    
    z=*x;
    *x=*y;
    *y=z;
}
    