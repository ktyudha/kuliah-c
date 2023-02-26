#include <stdio.h>
void main(){
    char letters[20]="abcdefghijklmnopqrs";
    int i;

    for (i = 0; i <= 20; i++)
    {
        if (i % 2 == 1)
        {
            printf("%c ", letters[i]);
        } else {
            continue;
        }
        
    }
    
}