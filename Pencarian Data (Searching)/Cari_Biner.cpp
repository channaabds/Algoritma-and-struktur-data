#include <iostream>
using namespace std;

int caribin(int data[], int n, int k)
{
    int ada, atas, bawah, tengah, posisi;

    ada = 0;
    bawah = 0;
    atas = n-1;
    while(atas >= bawah)
    {
        tengah = (atas + bawah) / 2;
        if (k > data[tengah])
        bawah = tengah + 1;
        else if (k < data[tengah])
        atas = tengah - 1;
        else
        {
            ada = 1;
            posisi = tengah;
            bawah = atas + 1;
        }
    }

    if (!ada)
    posisi = -1;

    return posisi;
}

int main (){
    int data[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int dicari = 19;

    cout << "Posisi " << dicari << " Dalam Larik Data : " << caribin(data, 20, dicari) << endl;

    return 0;
}