#include <stdio.h>
#include <stdlib.h> // Prototipe untuk exit ()

int main (){
    int bil, i, prima;

    printf ("Masukan Bilangan Bulat Positif = ");
    scanf ("%d",&bil);

    if (bil < 2)
    {
        printf ("Bilangan Harus Lebih Besar dari 2\n");
        exit (1);  // Akhiri program dg nilai keluar = 1
    }
    prima = 1; // Berarti Bilangan Prima
    for (i = 2; i <= bil / 2; i++)
    if (bil % i == 0)
    {
        prima = 0; // Berarti Bukan Bilangan Prima
        break;  // Keluar dari for
    }
    if (prima)
    printf ("Bilangan Prima\n");
    else
    printf ("Bukan Bilangan Prima\n");

    return 0;
}