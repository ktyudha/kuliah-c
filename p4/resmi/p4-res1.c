#include <stdio.h>
int main()
{
    int celcius;

    printf("Masukkan suhu dalam celcius : ");
    scanf("%d", &celcius);

    switch (celcius >= 30) {
        case 1:
            printf("Suhu sangat panas");
            break;
    default:
        switch (celcius <= 0) {
            case 1:
                printf("suhu sangat dingin");
                break;
            default:
                printf("suhu sangat sejuk");
                break;
        }
        break;
    }
    return 0;
}