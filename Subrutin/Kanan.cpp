#include <iostream>
#include <cstring>
using namespace std;

char *kanan(char st[], int n)
{
    int indeks, i, panjang;
    static char strtemp[80];

    panjang = strlen(st);
    if (n > panjang)
    n = panjang;

    i = 0;
    for (indeks = panjang - n; indeks < panjang; indeks++)
    {
        strtemp[i] = st[indeks];
        i++;
    }

    strtemp[i+1] = 0;
    return (char *)strtemp;
}

int main (){
    cout << kanan ("Devi Sinta", 5) << endl;
    // cout << kanan ("Channa Abdullah Salim", 10) << endl;
    // cout << kanan ("Channa Abdullah Salim", 11) << endl;
    cout << kanan ("Devi Sinta", 9) << endl;
    cout << kanan ("Devi Sinta", 15) << endl;

    return 0;
}