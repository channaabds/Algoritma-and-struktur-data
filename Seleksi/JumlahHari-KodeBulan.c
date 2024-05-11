#include <stdio.h>

int main (){
    int Kode_bulan;

    printf ("Masukan Kode Bulan (1..12) = ");
    scanf ("%d",&Kode_bulan);

    if (Kode_bulan == 2)
    printf ("Jumlah hari 28 atau 29\n");
    else if (Kode_bulan == 1  ||  Kode_bulan ==3  ||  Kode_bulan ==5  ||  Kode_bulan == 7  ||  Kode_bulan ==8  ||  Kode_bulan == 10  ||  Kode_bulan == 12)
    printf ("Jumlah Hari 31\n");
    else if (Kode_bulan == 4 || Kode_bulan == 6 || Kode_bulan == 9 || Kode_bulan == 11)
    printf ("Jumlah Hari 30\n");
    else
    printf ("Salah Kode Bulan\n");

    return 0;
}