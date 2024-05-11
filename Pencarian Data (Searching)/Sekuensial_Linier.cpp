#include <iostream>
using namespace std;

int cari(int data[], int n, int k)
{
    int posisi, i, ketemu;

    if (n <= 0 )
    posisi = -1;
    else
    {
        ketemu = 0;
        i = 1;
        while ((i < n-1) && ! ketemu)
        if (data[i] == k)
        {
            posisi = i;
            ketemu = 1;
        }
        else
        i++;
        if (!ketemu)
        posisi = -1;
    }

    return posisi;
}

int main (){
    int data[10] = {1,2,3,4,5,6,7,8,9,5};
    int dicari = 0;

    cout << "Posisi " << dicari << " Dalam Larik Data : " << cari(data, 10, dicari) << endl;

    return 0;
}