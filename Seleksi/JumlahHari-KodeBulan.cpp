#include <iostream>
using namespace std;

int main (){
    int Kode_bulan;

    cout <<"Masukan Kode Bulan (1..12) = ";
    cin >> Kode_bulan;

    if (Kode_bulan == 2)
    cout <<"Jumlah hari 28 atau 29" <<endl;
    else if (Kode_bulan == 1  ||  Kode_bulan ==3  ||  Kode_bulan ==5  ||  Kode_bulan == 7  ||  Kode_bulan ==8  ||  Kode_bulan == 10  ||  Kode_bulan == 12)
    cout <<"Jumlah Hari 31" << endl;
    else if (Kode_bulan == 4 || Kode_bulan == 6 || Kode_bulan == 9 || Kode_bulan == 11)
    cout <<"Jumlah Hari 30" <<endl;
    else
    cout <<"Salah Kode Bulan" <<endl;

    return 0;
}