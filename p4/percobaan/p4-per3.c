#include <stdio.h>

int main(){
    int a,b,c,result;

    printf("Masukkan 3 angka : ");
    scanf("%d %d %d", &a,&b,&c);

    if(a<b){
        if(a<c){
            result = a;
        } else {
            result = c;
        }
    } else if (b<c) {
        result = b;  
    } else {
        result = c;
    }
    
    printf("Angka yang terkecil adalah %d", result);
}