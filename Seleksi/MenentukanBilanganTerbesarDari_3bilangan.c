#include <stdio.h>

int main (){
    double x,y,z,terbesar;

    printf ("Masukan Bilangan X = ");
    scanf ("%lf",&x);

    printf ("Masukan Bilangan Y = ");
    scanf ("%lf",&y);

    printf  ("Masukan Bilangan z = ");
    scanf ("%lf",&z);

    terbesar = x;    // Anggap dulu yg terbesar adl X

    if (terbesar < y) terbesar = y;  // Bandingkan dgn Y
    
    if (terbesar < z) terbesar = z;  // Bandingkan dgn Z

    printf ("Terbesar = %lf\n",terbesar);

    return 0;


}