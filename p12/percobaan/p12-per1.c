#include <stdio.h>
#include <string.h>

void main()
{
    int *i;
    int j = 10, k, m[] = {2, 5};
    int **l;

    printf("%p\n",&i);
    printf("%p\n",&l);
    i = m;
    i++;
    *i = j;
    j = *i;
    i = &j;
    k = *(&j);
    l = &i;
    printf("%d\n%d\n%d\n%d\n%d",i,j,k,m,l);
}