#include <stdio.h>
void fung_a(void);
void fung_b(void);
int x = 20;
int main()
{
    x += 2;
    printf("\nNilai x dalam main() = %d\n\n", x);
    fung_a();
    fung_a();
    
    return 0;
}
void fung_a(void)
{
    static x = 5;
    x++;
    printf("Nilai x dalam fung_a() = %d\n", x);
    fung_b();
}
void fung_b(void)
{
    int x = 8;
    x--;
    printf("Nilai x dalam fung_b() = %d\n", x);
}