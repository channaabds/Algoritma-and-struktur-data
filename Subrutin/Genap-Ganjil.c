#include <stdio.h>

int ganjil(int bil)
{
    if (bil % 2 == 1)
    return 1;
    else
    return 0;
}

int main (){
    printf ("%d\n", ganjil(5));
    printf ("%d\n", ganjil(7));
    printf ("%d\n", ganjil(6));

    return 0;
}