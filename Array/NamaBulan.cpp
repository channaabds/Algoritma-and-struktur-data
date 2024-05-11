#include <iostream>
using namespace std;

int main (){
    char nama_bulan [][10] = {"", "Januari", "Februari", "Maret", "April", "Mei", "Juni", "Juli", "Agustus", "September", "Oktober", "November", "Desenber"};
    int kode_bulan;

    cout << "Masukan Kode Bulan (1..12) = ";
    cin >> kode_bulan;
    if (kode_bulan >= 1  &&  kode_bulan <= 12)
    cout << "Bulan : " << nama_bulan[kode_bulan] << endl;
    else
    cout << "Kode Salah tdk diantara (1-12)";

    return 0;
}