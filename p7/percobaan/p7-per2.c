#include <stdio.h>
float operasi();
int main()
{
    operasi();
    return 0;
}
float operasi()
{
    int n, i, input = 0;
    float avg, hasil;

    printf("Masukkan data N : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("Masukkan data ke %d = ", i);
        scanf("%d", &input);

        // input++; // dengan syarat input ada nilainya //
        hasil += input;
    }
    avg = hasil / n;
    printf("Rata - rata = %.1f", avg);
}