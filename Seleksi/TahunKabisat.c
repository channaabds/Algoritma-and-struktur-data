#include <stdio.h>

int main (){
    int tahun;

    printf ("Masukan Tahun = ");
    scanf ("%d", &tahun);

    if (tahun %4 !=0)
    printf ("Bukan Kabisat\n");
    else
    if ((tahun % 100 == 0) &&  (tahun % 400 !=0))
    printf ("Bukan Kabisat\n");
    else
    printf ("Tahun Kabisat\n");

    return 0;
}