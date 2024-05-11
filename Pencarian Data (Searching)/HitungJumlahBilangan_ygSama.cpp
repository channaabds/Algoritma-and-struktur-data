#include <iostream>
using namespace std;

int hitung(int data[], int n, int k)
{
    int jumlah, i, ketemu;

    jumlah = 1;
    for (i = 1; i < n; i++)
    if (data[i] == k)
    jumlah++;

    return jumlah;
}

int main (){
    int data [10] = {5,2,5,4,5,6,7,8,9,5};
    int dicari = 5;

    cout << "Banyak Bilangan " << dicari << " Dalam Larik data : " << hitung(data, 10, dicari) << endl;

    return 0;
}