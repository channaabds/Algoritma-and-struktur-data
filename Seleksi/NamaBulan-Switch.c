#include <stdio.h>

int main (){
    int Kode_Bulan;

    printf ("Masukan Kode Bulan = ");
    scanf ("%d", &Kode_Bulan);

    switch (Kode_Bulan)
    {
        case 1 :
        printf ("Januari\n");
        break;
        case 2 :
        printf ("Februari\n");
        break;
        case 3 :
        printf ("Maret\n");
        break;
        case 4 :
        printf ("April\n");
        break;
        case 5 :
        printf ("Mei\n");
        break;
        case 6 :
        printf ("Juni\n");
        break;
        case 7 :
        printf ("Juli\n");
        break;
        case 8 :
        printf ("Agustus\n");
        break;
        case 9 :
        printf ("September\n");
        break;
        case 10 :
        printf ("Oktober\n");
        break;
        case 11 :
        printf ("November\n");
        break;
        case 12 :
        printf ("Desember\n");
        break;
        default :
        printf ("Salah Kode Bulan\n");
    }
    return 0;
}