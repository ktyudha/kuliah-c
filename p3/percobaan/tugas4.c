#include <stdio.h>

int main() {
    int p, l, t, v;
    
    printf("Masukkan panjang, lebar dan tinggi\n");
    printf("Panjang (cm) : ");
    scanf("%d",&p);
    
    printf("Lebar (cm) : ");
    scanf("%d",&l);
    
    printf("Tinggi (cm) : ");
    scanf("%d",&t);
    
    v=p*l*t;
    
    printf("Jadi volumenya adalah %d cm kubik",v);
    return 0;
}