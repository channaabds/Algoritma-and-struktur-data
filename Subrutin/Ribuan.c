#include <stdio.h>
#include <string.h>

char * format_ribuan(char st[])
{
    static char strTemp[80];
    int i, posisiTemp, posisiSt;
    int panjang, jum_titik, sisa_digit;
    int jumKar;

    panjang = strlen(st);

    if (panjang == 0)
    return (char *) 0;  // String Kosong

    jum_titik = panjang / 3;

    if (jum_titik == 0)
    return (char *) st; // String itu sendiri

    jumKar = panjang + jum_titik;
    posisiTemp = jumKar - 1;

    while (panjang > 3)
    {
        // Ambil 3 karakter terakhir
        posisiSt = panjang - 1;
        for (i = posisiSt; i > posisiSt - 3; i--)
        {
            strTemp[posisiTemp] = st[i];
            posisiTemp = posisiTemp - 1;
        }

        strTemp[posisiTemp] = '.';
        posisiTemp--;

        panjang = panjang - 3;
    }

    // Tulis sisa digit
    if (panjang > 0)
    for (i = 0; i < panjang; i++)
    strTemp[i] = st[i];

    strTemp[jumKar] = 0;  // Karakter NULL

    return (char *)strTemp;
}

int main (){
    printf ("%s", format_ribuan("9776543"));

    return 0;
}