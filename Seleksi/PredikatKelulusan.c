#include <stdio.h>

int main (){
    double ip;

    printf ("Masukan IP = ");
    scanf ("%lf",&ip);

    if (ip >= 2.00  &&  ip <= 2.75)
    printf ("Lulus Memuaskan\n");
    else
    if (ip > 2.75  &&  ip <= 3.50)
    printf ("Lulus Sangat Memuaskan\n");
    if (ip > 3.50  &&  ip  <= 4.00)
    printf ("Lulus Dengan Pujian\n");
    else
    printf ("Data IP Tidak Valid\n");

    return 0;
}