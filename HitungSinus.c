/* ------------------------------------------------------------
Menghitung Sinus

pada GNU/Linux, kompilasilah dengan memberikan perintah :

gcc -lm sinx.c -o sinx
--------------------------------------------------------------*/

#include <stdio.h>
#include <math.h>

int main (){
    double sinx, x, hasil_pangkat, faktorial;
    int i, j;

    printf ("Masukan Sudut Dalam Radian = ");
    scanf ("%lf", &x);

    sinx = x;
    for (i = 2; i <= 10; i++)
    {
        /* --- Hitung (2i-1)! ---*/
        faktorial = 1;
        for (j = 2*i-1; j >= 1; j--)
        hasil_pangkat *= x;

        // --- Hitung Jumlah Sampai Suku ke-i ---
        if (i % 2 == 0)
        sinx = sinx - hasil_pangkat / faktorial;
        else
        sinx = sinx + hasil_pangkat / faktorial;
    }
    printf ("Sinx (Menurut Perhitungan) = %lf\n", sinx);
    printf ("Sinx (Menurut Pustaka) = %lf\n", sin (x));

    return 0;
}