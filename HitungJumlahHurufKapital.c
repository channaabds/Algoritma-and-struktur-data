#include <stdio.h>
#include <string.h>

int main (){
    int i, jum;
    char string[80];
    char kar;

    printf ("Masukan Sebarang String = ");
    gets(string);

    jum = 0;
    for (i = 0; i < (int) strlen(string); i++)
    {
        kar = string[i];
        if ((kar >= 'A') && (kar <= 'Z'))
        jum++;
    }
    printf ("Jumlah Huruf Kapital = %d\n", jum);

    return 0;
}