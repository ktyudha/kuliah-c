#include <stdio.h>
void main()
{
    int count = 16, sum = 17, *x, *y;
    x = &sum;
    *x = 27;
    y = x;
    x = &count;
    *x = count;
    sum = *x / 2 * 3;
    printf("Alokasi memori x : %p\nAlokasi memori y : %p\n", &x,&y);
    printf("count = %d, sum = %d, *x = %d, *y = %d\n",
           count, sum, *x, *y);
}