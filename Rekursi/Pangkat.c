#include <stdio.h>

long int pangkat(unsigned int y, unsigned int n)
{
    if ( n == 1)
    return y;
    else
    return y * pangkat (y, n-1);
}

int main (){
    int y, n;
    long int hasil;

    printf ("Menghitung Y pangkat \n");

    printf ("Y = ");
    scanf ("%d", &y);

    printf ("n = ");
    scanf ("%d", &n);

    hasil = pangkat(y,n);

    printf ("%d^%d = %ld", y, n, hasil);

    return 0;
}