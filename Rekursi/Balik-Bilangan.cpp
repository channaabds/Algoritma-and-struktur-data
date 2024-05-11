#include <iostream>
using namespace std;

void balik(long int bil)
{
    long int Digit_Tersisa_Di_Kiri;

    cout << bil % 10;

    Digit_Tersisa_Di_Kiri = bil / 10;

    if (Digit_Tersisa_Di_Kiri != 0)
    balik(Digit_Tersisa_Di_Kiri);
}

int main (){
    int bil;

    cout << "Bilangan Bulat = ";
    cin >> bil;

    balik(bil);

    return 0;
}