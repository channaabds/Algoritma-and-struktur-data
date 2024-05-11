#include <stdio.h>

int main (){
    int data [] = {1,2,3,4,5,6,7,8,9,0,11,12};
    int tmp;

    int i;
    for (i = 0; i < 11; i += 2)
    {
        tmp = data [i];
        data [i] = data [i+1];
        data [i+1] = tmp;
    }

    // Tampilkan Isi Larik
    for (i = 0; i < 12; i++)
    printf ("%d ", data[i]);

    printf ("\n");

    return 0;
}