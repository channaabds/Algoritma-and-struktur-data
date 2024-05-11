#include <iostream>
using namespace std;

int cari(int data[], int n, int k)
{
    int posisi, i, ketemu;

    if (n <= 0)
    posisi = -1;
    else
    {
        ketemu = 0;
        i = n-1;
        while ((i >= 0) && !ketemu)
        if (data[i] == k)
        {
            posisi = i;
            ketemu = 1;
        }
        else
        i--;

        if (!ketemu)
        posisi = -1;
    }
    return posisi;
}

int main (){
    int data [10] = {1,8,3,10,8,6,7,8,9,10};
    int dicari = 10;

    cout << "Posisi " << dicari << " Dalam Larik Data : " << cari(data, 10, dicari) << endl;

    return 0;
}