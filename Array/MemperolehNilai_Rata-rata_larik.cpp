#include <iostream>
using namespace std;

int main (){
    double data [10];
    int i, jumdata;
    char jawaban;
    double jumtotal, rata_rata;

    jumdata = 0;
    for (i = 0; i < 10; i++)
    {
        cout << "Masukan sebarang Bilangan = ";
        cin >> data [i];

        cout << " Memasukan Lagi (Y/T) ?";
        cin >> jawaban;

        if (jawaban == 'T'  ||  jawaban =='t')
        {
            jumdata = i + 1;
            break;
        }
    }

    // Hitung Jumlah Dari Keseluruhan Elemen Larik
    jumtotal = 0;
    for (i = 0; i < jumdata; i++)
    jumtotal = jumtotal + data [i];

    rata_rata = jumtotal / jumdata;
    cout << "Rata - rata = " << rata_rata <<endl;

    return 0;
}