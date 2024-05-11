#include <iostream>
using namespace std;

int main (){
    double data[10];
    int i, jumdata;
    char jawaban;

    jumdata = 0;
    for (i = 0; i < 10; i++)
    {
        cout << "Masukan Sebarang Bilangan = ";
        cin >> data[i];

        cout << "Mamasukan Lagi (Y/T) ? ";
        cin >> jawaban;

        if (jawaban == 'T'  ||  jawaban == 't')
        {
            jumdata = i + 1;
            break;
        }
    }

    for (i = 0; i < jumdata; i++)
    cout << data [i] <<endl;

    return 0;
}