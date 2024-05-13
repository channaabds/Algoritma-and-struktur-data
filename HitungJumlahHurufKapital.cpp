#include <iostream>
#include <cstring>
using namespace std;

int main (){
    int i,jum;
    char string [80];
    char kar;

    cout << "Masukan Sebarang String = ";
    cin.getline (string, 80);

    jum = 0;
    for (i = 0; i < (int) strlen(string); i++)
    {
        kar = string[i];
        if ((kar >= 'A') && (kar <= 'Z'))
        jum++;
    }
    cout << "Jumlah Huruf Kapital = " << jum << endl;

    return 0;

}