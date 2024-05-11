#include <iostream>
#include <cstring>
using namespace std;

int poskar(char st[], char k)
{
    int i, posisi, panjang;

    i = 0;
    posisi = -1;
    panjang = strlen(st);

    while ((i < panjang-1) && posisi == -1)
    {
        if (st[i] == k)
        posisi = i;

        i++;
    }

    return posisi;
}

int main (){
    char kalimat[] = "Channa Abdullah Salim";
    char dicari = 'A';

    cout << "Posisi " << dicari << " Dalam string " << kalimat << ": " << poskar(kalimat, dicari) << endl;

    dicari = 'C';
    cout << "Posisi " << dicari << " Dalam string " << kalimat << ": " << poskar(kalimat, dicari) << endl;

    return 0;
}