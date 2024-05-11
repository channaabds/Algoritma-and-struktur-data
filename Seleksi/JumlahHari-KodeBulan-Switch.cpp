#include <iostream>
using namespace std;

int main (){
    int Kode_Bulan;
    cout <<"Masukan Kode Bulan = ";
    cin >> Kode_Bulan;

    switch (Kode_Bulan)
    {
    case 2 :
    cout <<"Jumlah Hari 28 atau 29 "<<endl;
    break;
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
    cout <<"Jumlah Hari 31" <<endl;
    break;
    case 4:
    case 6:
    case 9:
    case 11:
    cout <<"Jumlah Hari 30" <<endl;;
    break;
    default :
    cout <<"Salah Kode Bulan" <<endl;
    }
return 0;

}