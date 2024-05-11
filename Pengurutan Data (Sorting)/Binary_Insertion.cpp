#include <iostream>
using namespace std;

void tampilkan_larik(int data[], int n)
{
    int i;

    for (i = 0; i < n; i++)
    cout << data[i] << " ";
    cout << endl;
}

void binary_insertion(int data[], int n)
{
    int j, k;
    int x;
    int kiri, kanan, tengah;

    for (k = 1; k < n; k++)
    {
        x = data[k];
        kiri = 0;
        kanan = k-1;

        while (kiri <= kanan)
        {
            tengah = (kiri + kanan) / 2;
            if (x < data[tengah])
            kanan = tengah - 1;
            else
            kiri = tengah + 1;
        }

        for (j = k-1; j >= kiri; j--)
        data[j+1] = data[j];
        data[kiri] = x;
    }
}

int main ()
{
    const int JUM_DATA = 15;

    int i;
    int data[] = {12,11,10,1,5,2,45,67,89,32,100,21,102,189};

    binary_insertion(data, JUM_DATA);

    cout << "Hasil Pengurutan : \n";
    tampilkan_larik(data, JUM_DATA);

    return 0;
}