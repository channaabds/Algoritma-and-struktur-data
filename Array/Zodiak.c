#include <stdio.h>

int main (){
    struct zodiac
    {
        char nama[12];
        int tg_awal;
        int bl_awal;
        int tg_akhir;
        int bl_akhir;
    };

    struct zodiac z[] = 
    {
        {"Aries", 21, 3, 19, 4},
        {"Taurus", 20, 4, 20, 5},
        {"Gemini", 21, 5, 20, 6},
        {"Cancer", 21, 6, 22, 7},
        {"Leo", 23, 7, 22, 8},
        {"Virgo", 23, 8, 22, 9},
        {"Libra", 23, 9, 22, 10},
        {"Scorpio", 23, 10, 21, 11},
        {"Sagitarius", 22, 11, 21, 12},
        {"Capricorn", 22, 12, 19, 1},
        {"Aquarius", 20, 1, 18, 2},
        {"Pisces", 19, 2, 20, 3}
    };

    int tanggal, bulan;
    int i;

    printf ("Masukan Tanggal Kelahiran (1..31) = ");
    scanf ("%d", &tanggal);

    printf ("Masukan Bulan Kelahiran (1..12) = ");
    scanf ("%d", &bulan);

    for (i=0; i < 12; i++)
    if ((tanggal >= z[i].tg_awal  &&  bulan == z[i].bl_awal)  ||  (tanggal <= z[i].tg_akhir  &&  bulan == z[i].bl_akhir))
    {
        printf ("%s\n", z[i].nama);
        break;
    }

    return 0;
}