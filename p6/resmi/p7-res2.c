#include <stdio.h>
int main() {
    int c, i, j, m, urut = 0, total = 0;

    printf("Program untuk mentotal bilangan prima\n");
    printf("Masukkan Nilai M : ");
    scanf("%d", &m);
    for (i = 1; i++;) {
        c = 0;
        for (j = 1; j < i; j++) {
            if (i % j == 0) {
                c++;
            }
        }
        if (c < 2) {
            urut++;
            printf("Bilangan prima yang ke %d = %d\n", urut, i);
            total += i;
        }
        if (urut == m) {
            break;
        }
    }
    printf("Total %d bilangan prima = %d", m, total);
}