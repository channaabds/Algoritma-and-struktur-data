#include <iostream>
#include <iomanip>
using namespace std;

int main (){
    int jum_baris, jum_kolom;
    int i, j;

    int data[10][10];

    cout << "Masukan Baris (1..10) = ";
    cin >> jum_baris;

    cout << "Masukan Kolom (1..10) = ";
    cin >> jum_kolom;

    // Memasukan elemen ke dalam Matriks
    cout << "Input Data Matriks : \n\n";
    for (i=0; i <= jum_baris - 1; i++)
    for (j=0; j <= jum_kolom - 1; j++)
    {
        cout << "Nilai Baris " << i+1 << ", kolom " << j+1 << ": ";
        cin >> data[i][j];
    }

    // Menampilkan Matriks

    cout << "\n Data Matriks : \n";
    for (i=0; i <= jum_baris - 1; i++)
    {
        for (j=0; j <= jum_kolom - 1; j++)
        cout << setw(8) << data[i][j];
        cout << endl;  // Pindah Baris
    }

    return 0;
}