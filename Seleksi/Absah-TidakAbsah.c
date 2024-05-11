#include <stdio.h>

int main (){
    double nilai;

    printf ("Masukan Nilai Ujian = ");
    scanf ("%lf", &nilai);

    if (nilai >=0  &&  nilai <=100)
    printf ("Absah\n");
    else
    printf ("Tidak Absah\n");

    return 0;

}