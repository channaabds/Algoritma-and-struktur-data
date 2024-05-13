#include <stdio.h>

int main (){
    int bil, jum, i;

    printf ("Masukan Sebuah Bilangan Bulat Positif = ");
    scanf ("%d",&bil);

    jum = 0;
    for (i = 1; i <= bil; i++)
    if (bil % i==0)
    jum++;
    if (jum == 2)
    printf ("Bilangan Prima\n");
    else
    printf ("Bukan Bilangan Prima\n");
    return 0;
}