#include <stdio.h>
void main()
{
    int x = 3, y = 4;
    
    int *ip;
    printf("Alokasi memori : %p\n", &ip);

    ip = &x; // ip =3
    y = *ip; // 4 = 3
    x = 10;  // x = 10
    *ip = 3; // x = 3

    printf("x = %d, y = %d", x, y);
}