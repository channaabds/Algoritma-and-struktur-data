#include <stdio.h>

int main (){
    char nama_bulan [][10] = {"","Januari", "Februari", "Maret", "April", "Mei", "Juni", "Juli", "Agustus", "September", "Oktober", "November", "desember"};
    int kode_bulan;

    printf ("Kode Bulan (1..12) = ");
    scanf ("%d", &kode_bulan);

    if (kode_bulan >= 1  &&  kode_bulan <=12)
    printf ("Bulan : %s\n", nama_bulan[kode_bulan]);
    else
    printf ("Kode Bulan Harus Berada antara 1-12\n");

    return 0;
}