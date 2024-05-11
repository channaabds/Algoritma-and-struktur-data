#include <stdio.h>

int main (){
    struct siswa
    {
        char nama[25];
        double nilai;
    };
    struct siswa daftar[10];

    int pencacah;
    double jum;
    int data_gagal;

    pencacah = 0;
    while (pencacah < 5)
    {
        printf ("Nama Siswa : ");
        scanf ("%s", daftar[pencacah].nama);

        while (1)
        {
            printf ("Nilai : ");
            scanf ("%lf", &daftar[pencacah].nilai);

            if (daftar[pencacah].nilai >= 0  &&  daftar[pencacah].nilai <=100)
            break;
            else
            {
                printf ("Nilai Harus Terletak ");
                printf ("Antara 0 sampai 100\n");
            }
        }

        pencacah++;
    }

    // Jumlahkan Semua Nilai

    jum = 0;
    pencacah = 0;
    while (pencacah < 5)
    {
        jum = jum + daftar[pencacah].nilai;
        pencacah++;
    }

    // Menampilkan Siswa yg gagal

    printf ("Siswa yang gagal : \n");
    data_gagal = 0;
    pencacah = 0;
    while (pencacah < 5)
    {
        if (daftar[pencacah].nilai < 60)
        {
            data_gagal = 1;
            printf ("%s\n", daftar[pencacah].nama);
        }

        pencacah++;
    }

    if (data_gagal == 0)
    printf ("Tak Ada\n");

    return 0;
}