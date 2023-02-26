#include <stdio.h>

void main()
{
    int x[5], *p;
    p = x;
    *p = 5;
    *(p + 1) = *(x + 0);
    *(p + 2) = *p - 2;
    *(p + 3) = *(p + 1) + 4;
    *(x + 4) = *(x + 2);
    printf("%d %d %d %d %d", x[0], x[1], x[2], x[3], x[4]);
}