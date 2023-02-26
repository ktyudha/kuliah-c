#include <stdio.h>

int main() {
    int a,b,c;
    
    printf("Masukkan bilangan pertama \n");
    scanf("%d",&a);
    
    printf("Masukkan bilangan kedua \n");
    scanf("%d",&b);
    
    c=a,a=b,b=c;
    
    printf("Jadi bilangan pertama sekarang %d \n", a);
    printf("Jadi bilangan kedua sekarang %d", b);
    
    return 0;
}