#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char kata1[255], kata2[255];
    char *kal[255];
    int tes;

    printf("Kalimat (2 kata) : ");
    scanf("%s %s", kata1, kata2);

    *kal = strrev(kata2);

    tes = strcmp(kata1, *kal);

    if (tes == 0) {
        printf("POLINDROM");
    } else {
        printf("Bukan Polindrom");
    }

    return 0;
}