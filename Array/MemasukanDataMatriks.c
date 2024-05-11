#include <stdio.h>

int main (){
    int jum_baris, jum_kolom;
    int i, j;
    int data[10][10];

    printf ("Jumlah Baris (1..10) = ");
    scanf ("%d", &jum_baris);

    printf ("Jumlah Kolom (1..10) = ");
    scanf ("%d", &jum_kolom);

    // Pemasukan Elemen Matriks

    for (i=0; i <= jum_baris - 1; i++)
    for (j=0; j <= jum_kolom - 1; j++)
    {
        printf ("Nilai baris %d, kolom %d: ", i+1, j+1);
        scanf ("%d", &data[i][j]);
    }

    // Menaampilkan Matriks
    printf ("Data Matriks: \n");
    for (i=0; i <= jum_baris - 1; i++)
    {
        for (j=0; j <= jum_kolom - 1; j++)
        printf ("%8d", data[i][j]);
        printf ("\n");  // Pindah Baris
    }

    return 0;
}