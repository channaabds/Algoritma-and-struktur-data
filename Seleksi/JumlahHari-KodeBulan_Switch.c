#include <stdio.h>

int main (){
    int Kode_Bulan;
    printf ("Masukan Kode Bulan = ");
    scanf ("%d", &Kode_Bulan);

    switch (Kode_Bulan)
    {
    case 2 :
    printf ("Jumlah Hari 28 atau 29\n");
    break;
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
    printf ("Jumlah Hari 31\n");
    break;
    case 4:
    case 6:
    case 9:
    case 11:
    printf ("Jumlah Hari 30\n");
    break;
    default :
    printf ("Salah Kode Bulan\n");
    }
return 0;

}