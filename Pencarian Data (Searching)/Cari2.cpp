#include <iostream>
using namespace std;

int cari(int data[], int n, int k,int m)
{
    int posisi, i, ketemu;
    int pencacah = 0;

    if (n <= 0)
    posisi = -1;
    else
    {
        ketemu = 0;
        i = 1;
        while ((i < n-1) && !ketemu)
        if (data[i] == k)
        {
            pencacah++;
            printf ("Pencacah %d\n", pencacah);

            if (pencacah == m)
            {
                printf ("ketemu %d\n", pencacah);
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
    cout << "Posisi " << dicari << " Yang ke-" << ke << " Dalam Larik data : " << cari(data, 8, dicari, ke) << "\n";

    ke = 1;
    cout << "Posisi " << dicari << " Yang ke-" << ke << " Dalam Larik data : " << cari(data, 8, dicari, ke) << "\n";

    ke = 2;
    dicari = 5;
    cout << "Posisi " << dicari << " Yang ke-" << ke << " Dalam Larik data : " << cari(data, 8, dicari, ke) << "\n";

    return 0;
}