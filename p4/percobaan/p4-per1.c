#include <stdio.h>
int main(){
    int celcius;

    printf("Masukkan suhu dalam celcius : ");
    scanf("%d", &celcius);

if(celcius >= 30){
    printf("Suhu sangat panas");
} else if (celcius <= 0){
    printf("Suhu sangat dingin");
} else {
    printf("Suhu sangat sejuk");
}
    return 0;
}