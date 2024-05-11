#include <stdio.h>

int main (){
    char karakter;

    printf ("Masukan Huruf = ");
    scanf ("%c",&karakter);

    if (karakter >= 'A'  && karakter <= 'Z')
    printf ("%c Termasuk Huruf Kapital\n",karakter);
    else
    printf ("%c Termasuk Huruf Kecil\n",karakter);

    return 0;

}