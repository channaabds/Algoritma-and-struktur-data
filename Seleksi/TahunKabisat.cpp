#include <iostream>
using namespace std;

int main (){
    int tahun;

    cout << "Masukan tahun = ";
    cin >> tahun;

    if (tahun %4 !=0)
    cout << "Bukan kabisat"<<endl;
    else
    if ((tahun %100 == 0) && (tahun %400 != 0))
    cout << "Bukan Kabisat"<<endl;
    else
    cout << "Tahun Kabisat"<<endl;

    return 0;
}