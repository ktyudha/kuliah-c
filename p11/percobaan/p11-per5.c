#include <stdio.h>
void main()
{
    int array1[10], array2[10];
    int *ip1, *ip2 = array2;
    int *akhir = &array1[10];

    for (ip1 = &array1[0]; ip1 < akhir; ip1++) {
        *ip2++ = *ip1;
    }
    for (int i = 0; i < 5; i++) {

        printf("%d ", array2[i]);
    }
}