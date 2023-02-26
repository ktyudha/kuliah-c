#include <stdio.h>
void main()
{

    int i1, i2, *p1, *p2;
    // printf("%p\n", &i1);
    // printf("%p\n", &i2);
    // printf("%p\n", &p1);
    // printf("%p\n", &p2);
    i1 = 9;
    p1 = &i1;
    i2 = *p1 / 2 - 2 * 3;
    p2 = p1;
    printf("i1=%d,i2=%d,*p1=%d,*p2=%d\n", i1, i2, *p1, *p2);
}