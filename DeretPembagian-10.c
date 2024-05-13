#include <stdio.h>

int main (){
    long int nilai;

    nilai = 100000000;
    while (nilai >= 1)
    {
        printf ("%d",nilai);
        nilai = nilai / 10;
        printf ("\n");
    }
    return 0;
}