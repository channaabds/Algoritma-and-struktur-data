#include <iostream>
using namespace std;

int main (){
    char karakter;
    cout << " Masukan Huruf = ";
    cin >> karakter;

    if (karakter >= 'A'  &&  karakter <= 'Z')
    cout << karakter << " Termasuk Huruf Kapital" <<endl;
    else
    cout << karakter << " Bukan Huruf kapital" <<endl;

    return 0;
}