/*#include <stdio.h>

int main (){

    double x, y, terbesar;

    printf ("Masukan x = ");
    scanf ("%lf", &x);

    printf ("Masukan y = ");
    scanf ("%lf", &y);

    /*Mengasumsikan yang terbesar adalah x*/
  /*  terbesar = x;

    if (terbesar < y);
    terbesar = y;

    printf ("Bilangan terbesar = %lf\n", terbesar);

    return 0;
}*/


#include <stdio.h>

int main (){
    double x,y;
    printf ("Masukan x = ");
    scanf ("%lf, &x");

    printf ("Masukan y = ");
    scanf ("%lf, &y");

    if (x>y)
    printf ("Bilangan terbesar = %lf\n",x);
    else
    printf ("Bilangan terbesar = %lf\n",y);

    return 0;
}