#include <iostream>
using namespace std;

int main (){
    char string [80];
    int indeks;

    cout << "Masukan Suatu String = ";
    cin.getline(string,80);    // Membaca String

    indeks = 0;
    while (string [indeks] !='\0')
    {
        indeks = indeks + 1;
    }
    cout << "Jumlah Karakter = " << indeks << endl;
    return 0;
}