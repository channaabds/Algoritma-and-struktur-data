#include <iostream>
using namespace std;

int main (){
    int bilangan;

    cout<< " Masukan Bilangan Bulat = ";
    cin >> bilangan;

    if (bilangan %2 == 0)
    cout << "Bilangan Genap" <<endl;
    else
    cout << "Bilangan Ganjil" <<endl;

    return 0;
}