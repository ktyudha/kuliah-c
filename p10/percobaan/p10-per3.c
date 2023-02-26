#include <stdio.h>
#include <string.h>

int main(){
    char str1[10];
    char str2[20];
    char banding;

    printf("Karakter string ke-1 : ");
    gets(str1);
    printf("Karakter string ke-2 : ");
    gets(str2);

    banding = strcmp(str1,str2);

    if(banding == 0) {
        printf("\nKedua String sama \n");
    } else
    {
        printf("\nKedua String tidak sama\n");
    } 
    return 0;
}