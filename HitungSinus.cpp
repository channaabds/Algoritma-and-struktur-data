#include <iostream>
#include <cmath>
using namespace std;

int main (){
    double sinx, x, hasil_pangkat, faktorial;
    int i, j;

    cout << "Masukan Sudut Dalam Radian = ";
    cin >> x;

    sinx = x;
    for (i = 2; i <= 10; i++)
    {
        // --- Hitung (2i-1)! ---
        faktorial = 1;
        for (j = 2*i-1; j >= 1; j--)
        faktorial = faktorial * j;

        // --- x pangkat (2i-1) ---
        hasil_pangkat = 1;
        for (j = 1; j <= (2*i-1); j++)
        hasil_pangkat *= x;

        // Hitung Jumlah Sampai Suku ke-i ---
        if (i % 2 == 0)
        sinx = sinx - hasil_pangkat / faktorial;
        else
        sinx = sinx + hasil_pangkat / faktorial;
    }
    cout << "Sinx (Menurut Perhitungan) = " << sinx << endl;
    cout << "Sin x (Menurut Pustaka) = " << sin(x) << endl;
    
    return 0;
}