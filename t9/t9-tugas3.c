#include <stdio.h>
#include <stdlib.h>

void main()
{

    char input, letters[20] = "abcdefghijklmnopqrs";
    int i;

    printf("Masukkan Karakter : ");
    scanf("%c", &input);

    for (i = 0; i < 20; i++)
    {
        if (letters[i] != input)
        {
            continue;
        }
        else
        {
            printf("Huruf %c ada di dalam array", input);
            exit(0);
        }
    }
    if (i = 19)
    {
        printf("Huruf tersebut tidak ada dalam array");
    }
}