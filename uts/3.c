#include <stdio.h>

int main() {

    int i, j, max=5, front=1,back=max;
    for (i = 1; i <= max; i++)
    {
        for (j = 1; j <= max; j++)
        {
            if (j== front || j== back)
            {
                printf("@ ");
            }else {
                printf("= ");
            }  
        }
        front++;
        back--;
        printf("\n");
    }
    

    return 0;
}