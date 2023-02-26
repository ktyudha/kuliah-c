#include <stdio.h>
int main()
{
    char jawab;

    while (jawab != 's' && jawab != 'b')
    {
        printf("Anda sudah sholat?? (s/b)");
        scanf(" %c", &jawab);

        if (jawab == 's')
        {
            printf("Bagus!");
        }
        else if (jawab == 'b')
        {
            printf("Sholat itu ibadah");
        }
    }
    return 0;
}