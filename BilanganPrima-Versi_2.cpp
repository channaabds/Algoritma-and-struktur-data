#include <iostream>
#include <cstdlib>
using namespace std;

int main (){
    int bil, prima, i;

    cout << "Masukan Bilangan Bulat Positif = ";
    cin >> bil;

    if (bil < 2)
    {
        cout << "Bilangan Harus Lebih Besar dari 2"<<endl;
        exit (1);  // Akhiri Program dg nilai keluar = 1
    }

    prima = 1; // Berarti Bilangan Prima
    for (i = 2; i <= bil / 2; i++)
    if (bil % i==0)
    {
        prima = 0; // Berarti Bukan Bilangan Prima
        break;  // Keluar dari for
    }
    if (prima)
    cout << "Bilangan Prima"<<endl;
    else
    cout << "Bukan Bilangan Prima" <<endl;

    return 0;
}