#include <stdio.h>

int cari(int data[], int n, int k, int m)
{
    int posisi, i, ketemu;
    int pencacah = 0;

    if (n <= 0)
    posisi = -1;
    else
    {
        ketemu = 0;  // Salah
        i = 1;
        while ((i < n-1) && ! ketemu)
        if (data[i] == k)
        {
            pencacah++;
            printf ("Pencacah %d\n", pencacah);

            if (pencacah == m)
            {
                printf ("Ketemu %d\n", pencacah);
                posisi = i;
                posisi = 1;
            }
            else
            i++;
        }
        else
        i++;

        if (!ketemu)
        posisi = -1;
    }

    return posisi;
}

int main (){
    int data[8] = {10,9,4,6,3,4,2,5};
    int dicari;
    int ke;

    dicari = 4;
    ke = 2;
    printf ("Posisi %d yang ke-%d dalam larik data : %d\n", dicari, ke, cari(data, 8, dicari, ke));

    ke = 1;
    printf ("Posisi %d yang ke-%d dalam larik data : %d\n", dicari, ke, cari(data, 8, dicari, ke));

    ke = 2;
    dicari = 5;
    printf ("Posisi %d yang ke-%d dalam larik data : %d\n", dicari, ke, cari(data, 8, dicari, ke));

    return 0;
}

// int main (){
//     int data[8] = {1,7,2,7,3,5,2,5};
//     int dicari;
//     int ke;

//     dicari = 7;
//     ke = 2;
//     printf ("Posisi %d yang ke-%d dalam larik data : %d\n", dicari, ke, cari(data, 8, dicari, ke));

//     ke = 1;
//     printf ("Posisi %d yang ke-%d dalam larik data : %d\n", dicari, ke, cari(data, 8, dicari, ke));

//     ke = 2;
//     dicari = 5;
//     printf ("Posisi %d yang ke-%d dalam larik data : %d\n", dicari, ke, cari(data, 8, dicari, ke));

//     return 0;
// }