#include <stdio.h>

int main (){
    int bil, i, prima;

    printf ("Masukan Bilangan Bulat Positif : ");
    scanf ("%d",&bil);

    printf ("Pembagi %d = \n",bil);

    for (i = 1; i <= bil / 2; i++)
    if (bil % i == 0)
    printf ("%d\n",i);

    return 0;
}