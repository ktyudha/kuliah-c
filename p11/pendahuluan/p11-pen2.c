#include <stdio.h>
void main() {
    char *pointer[9], var[] = {"POLITEKNIK"};
    for (int i = 0; i <= 9; i++) {
        pointer[i] = &var[i];
    }
    printf("Huruf ketiga dari %s adalah %c", var, *pointer[2]);
}