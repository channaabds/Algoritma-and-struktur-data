#include <stdio.h>
#include <string.h>

char * ulang(char st[], int n)
{
    static char strtemp[1024];
    int i, j, panjang, posisi;

    panjang = strlen(st);  // Jumlah Karakter (st)

    if (panjang == 0)
    return (char *) 0;  // String Kosong

    posisi = 0; 
    for (i = 0; i < n; i++)
    for (j = 0; j < panjang; j++)
    {
        strtemp[posisi] = st[j];
        posisi++;
    }

    strtemp[posisi] = 0;  // Tanda Akhit String

    return (char *)strtemp;
}

int main (){
    printf ("%s\n", ulang("+", 8));
    printf ("%s\n", ulang("HA", 4));
    printf ("%s\n", ulang("BLA", 3));

    return 0;
}