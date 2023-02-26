#include <stdio.h>

int main(){
    int x= 1;
    while (x <=25)
    {
        ++x;
        if (x==15)
        {
            continue;
        }
        printf("%d\n", x);
    }
    printf("\n");
}