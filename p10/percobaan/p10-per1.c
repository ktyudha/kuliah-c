#include <stdio.h>
#include <string.h>

void main()
{
    char a[100], b[100];
awal:
    printf("\nKalimat ");
    gets(a);
    strcpy(b, a);
    strrev(a);
    if (strcmp(b, a) == 0)
    {
        printf("Termasuk POLINDROM\n");
    }
    else
    {
        printf("Bukan POLINDROM\n");
    }
    while (strcmp(b, a) != 0)
        goto awal;
}