#include <stdio.h>

int main (){
    int tanggal,bulan;
    printf ("Masukan Tanggal Kelahiran (1..31) = ");
    scanf ("%d", &tanggal);

    printf ("Masukan bulan Kelahiran (1..12) = ");
    scanf ("%d", &bulan);

    if ((tanggal >= 21 && bulan ==3) || (tanggal <=19 && bulan ==4))
    printf ("Aries\n");
    else if ((tanggal >=20 && bulan ==4) || (tanggal <=20 && bulan ==5))
    printf ("Taurus\n");
    else if ((tanggal >=21 && bulan ==5)||(tanggal <=20 && bulan ==6))
    printf ("Gemini\n");
    else if ((tanggal >=21 && bulan ==6)||(tanggal <=22 && bulan ==7))
    printf ("Cancer\n");
    else if ((tanggal >=23 && bulan ==7)||(tanggal <=22 && bulan ==8))
    printf ("Leo\n");
    else if ((tanggal >=23 && bulan ==8)||(tanggal <=22 && bulan ==9))
    printf ("Virgo\n");
    else if ((tanggal >=23 && bulan ==9)||(tanggal <=22 && bulan ==10))
    printf ("Libra\n");
    else if ((tanggal >=23 && bulan ==10)||(tanggal <=21 && bulan ==11))
    printf ("Scorpio\n");
    else if ((tanggal >=22 && bulan ==11)||(tanggal <=21 && bulan ==12))
    printf ("Sagitarius\n");
    else if ((tanggal >=22 && bulan ==12)||(tanggal <=19 && bulan ==1))
    printf ("Capricorn\n");
    else if ((tanggal >=20 && bulan==1)||(tanggal<= 18 && bulan ==2))
    printf ("Aquarius\n");
    else
    printf ("Pisces\n");

    return 0;

}