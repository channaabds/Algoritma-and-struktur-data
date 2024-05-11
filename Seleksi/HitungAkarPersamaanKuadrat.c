// ==============================================================================================
// Menentukan akar persamaan kuadrat ax2 + bx + c = 0
// Pada GNU atau Linux, kompilasilah dengan memberikan perintah : gcc -lm perskuad.c -0 perskuad
// -----------------------------------------------------------------------------------------------

#include <stdio.h>
#include <math.h>

int main (){
    double a,b,c;
    double diskriminan, x1,x2, re, im;

    printf ("Persamaan Kuadrat  \n");

    printf ("a = ");
    scanf ("%lf",&a);

    printf ("b = ");
    scanf ("%lf",&b);

    printf ("c = ");
    scanf ("%lf",&c);

    // Hitung Diskriminan
    diskriminan = b * b - 4 * a * c;
    // Evaluasi Diskriminan
    if (diskriminan > 0)
    {
        x1 = (-b + sqrt (diskriminan)) / (2*a);
        x2 = (-b - sqrt (diskriminan)) / (2*a);
        printf ("Akar Real  \n");
        printf ("x1 = %lf \n",x1);
        printf ("x2 = %lf \n",x2);
    }
    else if (diskriminan == 0)
    {
        x1 = -b / (2*a);
        x2 = x1;
        printf ("Akar Kembar  \n");
        printf ("x1 = %lf \n",x1);
        printf ("x2 = %lf \n",x2);
    }
    else // Diskriminan < 0
    {
        re = -b / (2*a);
        im = sqrt (fabs (diskriminan)) / (2*a);
        printf ("Akar Kompleks\n");
        printf ("x1 = %lf + %lfj \n",re,im);
        printf ("x2 = %lf - %lfj \n",re,im);
    }

return 0;


}