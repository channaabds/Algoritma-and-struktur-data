#include <stdio.h>

int caribin(int data[], int n, int k)
{
    int ada, atas, bawah, tengah, posisi;

    ada = 0;
    bawah = 0;
    atas = n-1;
    while (atas >= bawah)
    {
        tengah = (atas + bawah) / 2;
        if (k > data[tengah])
        bawah = tengah + 1;
        else if (k < data[tengah])
        atas = tengah - 1;
        else
        {
            ada = 1;                // Ketemu
            posisi = tengah;
            bawah = atas + 1;       // Mengakhiri Pengulangan
        }
    }

    if (!ada)
    posisi = -1;

    return posisi;
}

int main (){
    int data[] = {1,3,6,7,9,10,11,12,15,17,20};
    int dicari = 12;

    printf ("Posisi %d dalam larik data : %d\n", dicari, caribin(data, 11, dicari));

    return 0;
}