#include <stdio.h>
void main()
{
    int z = 9, s = 5, *pz, *ps;
    pz = &s;
    ps = &z;
    *pz = *ps + 3;
    *ps = *pz - 2;
    // pz = &z;
    printf("z = %d\n", z);
    printf("s = %d\n", s);
}