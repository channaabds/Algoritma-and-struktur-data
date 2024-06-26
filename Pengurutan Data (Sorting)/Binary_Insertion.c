#include <stdio.h>

void tampilkan_larik(int data[], int n)
{
    int i;

    for (i = 0; i < n; i++)
    printf ("%d ", data[i]);
    printf ("\n");
}

void binary_insertion(int data[], int n)
{
    int j, k;
    int x;
    int kiri, kanan, tengah;

    for (k = 1; k < n; k++)
    {
        x = data[k];

        /* Sisipkan x ke dalam data [0..k-1] */
        kiri = 0;
        kanan = k-1;

        while (kiri <= kanan)
        {
            /* Pencarian Biner */
            tengah = (kiri + kanan) / 2;   // Pembagian Bulat
            if (x < data[tengah])
            kanan = tengah - 1;
            else
            kiri = tengah + 1;
        }
        /* Melakukan Penggeseran */
        for (j = k-1; j >= kiri; j--)
        data[j+1] = data[j];

        /* Tempatkan x ke data[kiri] */
        data[kiri] = x;
    }
}

int main ()
{
    const int JUM_DATA = 8;

    int i;
    int data[] = {23,57,48,37,12,92,80,33};

    binary_insertion(data, JUM_DATA);

    /* Hasil Pengurutan */

    printf ("Hasil Pengurutan : \n");
    tampilkan_larik(data, JUM_DATA);

    return 0;
}