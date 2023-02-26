#include <stdio.h>

int main() {

    int hitung, x, y;
    // untuk baris
    for (x= 1; x <= 3; x++)
    {
        // untuk kolom
        for (y = 1; y <= 5; y++)
        {
            hitung = x * y;
            printf("%4d", hitung);
        }
        printf("\n");
    }
    
    return 0;
}