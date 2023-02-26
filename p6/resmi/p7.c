#include <stdio.h>
int main(){
    int pembagi_bil, kondisi, bil_prima, input, urutan=0, hasil=0;

    printf("Program untuk mentotal bilangan prima\n");
    printf("Masukkan nilai M : ");
    scanf("%d", &input);

    for (bil_prima = 1; bil_prima++;)
    {
        kondisi=0;
        for (pembagi_bil= 1; pembagi_bil < bil_prima; pembagi_bil++)
        {
            if ( (bil_prima % pembagi_bil) == 0)
            {
               kondisi++;
            }
        }
        if (kondisi <= input) {
            urutan++;
            printf("Bilangan prima yang ke %d = %d\n", urutan, bil_prima);
            hasil += bil_prima;
        } 
        if (urutan == input) {
            break;
        }
    }
    printf("Total %d bilangan prima = %d", input, hasil);
    return 0;
}