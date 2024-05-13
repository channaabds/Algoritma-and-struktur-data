#include <iostream>
using namespace std;

int main (){
    int bil, i;

    cout << "Masukan Bilangan Bulat Positif = ";
    cin >> bil;

    cout << "Pembagi " << bil << " : " <<endl;

    for (i = 1; i <= bil / 2; i++)
    if (bil % i == 0)
    cout << i << endl;

    return 0;
}