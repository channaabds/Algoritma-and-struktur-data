#include <iostream>
using namespace std;

int main (){
    int bil, jum, i;

    cout << "Masukan Bilangan Bulat Positif = ";
    cin >> bil;

    jum = 0;
    for (i = 1; i <= bil; i++)
    if (bil % i==0)
    jum++;
    if (jum == 2)
    cout << "Bilangan Prima"<<endl;
    else
    cout << "Bukan Bilangan Prima"<<endl;

    return 0;

}