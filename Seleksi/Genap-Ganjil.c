#include <stdio.h>

int main (){
    int bilangan;

    printf ("Masukan Sebuah Bilangan Bulat = ");
    scanf ("%d", &bilangan);

    if (bilangan %2 == 0)
    printf ("Bilangan Genap");
    else
    printf ("Bilangan Ganjil");

    return 0;
}