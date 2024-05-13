#include <stdio.h>

int main (){
    int m,n,r;
    printf ("Masukan nilai M = ");
    scanf ("%d",&m);

    printf ("Masukan nilai N = ");
    scanf ("%d",&n);

    r = m % n;
    while (r !=0)
    {
        m = n;
        n = r;
        r = m % n; // Digunakan untuk memperoleh sisa pembagian m dan n dan hasilnya diletakan pada variabel r.
    }

    printf ("FPB = %d\n",n);

    return 0;

}