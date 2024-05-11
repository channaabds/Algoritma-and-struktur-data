#include <stdio.h>

void balik(long int bil)  // Void = tdk ada tipe nilai balik || tdk ada return, sekadar menampilkan bilangan
{
    long int digit_Tersisa_Di_Kiri;

    printf ("%d", bil % 10);

    digit_Tersisa_Di_Kiri = bil / 10;

    if (digit_Tersisa_Di_Kiri != 0)
    balik(digit_Tersisa_Di_Kiri);
}

int main (){
    int bil;

    printf ("bilangan bulat = ");
    scanf ("%d", &bil);

    balik(bil);

    return 0;
}