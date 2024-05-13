#include <stdio.h>

int main (){
    double jum;
    int pencacah, bil;

    for (bil=1; bil <=99; bil++)
    {
        jum = jum + (double) bil / (bil + 1); // (double)bil dimaksudkan agar nilai bil dalam ekspresi dinyatakan dalam tipe double. 
        // dengan demikian, operasi pembagian dengan (bil + 1) akan dinyatakan dalam tipe double.
        // tanpa keberadaan (double), jum terakhir kali berisi nol! penyebabnya, bil / (bil + 1) akan selalu bernilai nol kalau diproses melalui tipe int.
    }
    printf ("Jumlah = %lf\n",jum);

    return 0;
}