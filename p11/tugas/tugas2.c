#include <stdio.h>
void main()
{
    int count = 16, sum = 17, *x, *y;
    printf("%p\n", &count);
    printf("%p\n", &sum);
    printf("%p\n", &x);
    printf("%p\n", &y);
    x = &sum;
    *x = 27;
    y = x;
    x = &count;
    *x = count;
    sum = *x / 2 * 3;
    printf("count = %d, sum = %d, *x = %d, *y = %d\n",
           count, sum, *x, *y);
}