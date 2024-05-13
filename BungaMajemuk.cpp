#include <iostream>
#include <iomanip>
using namespace std;

int main (){
    long int pokok, bunga;
    int tahun;

    pokok = 5000000;
    for (tahun =1; tahun <= 8; tahun++)
    {
        bunga = pokok * 7 / 100;
        pokok = pokok + bunga;
        cout << setw (2) << tahun << setw(11) << pokok << setw(11) << bunga << endl;
    }
    return 0;

}