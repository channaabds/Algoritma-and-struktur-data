#include <stdio.h>

int main (){
    double x,y,z,terbesar;

    printf ("Bilangan X = ");
    scanf ("%lf",&x);

    printf ("Bilangan Y = ");
    scanf ("%lf",&y);
    
    printf ("Bilangan Z = ");
    scanf ("%lf",&z);

    if (x > y  &&  x > z)
    terbesar = x;
    else if (y > x  &&  y > z)
    terbesar = y;
    else
    terbesar = z;

    printf ("Terbesar Adalah = %lf\n ",terbesar);

    return 0;
    
}