#include <iostream>
#include <cstring>
using namespace std;

char * ulang(char st[], int n)
{
    static char strtemp[1024];
    int i, j, panjang, posisi;

    panjang = strlen(st);

    if (panjang == 0)  // String Kosong
    return (char *) 0;

    posisi = 0;
    for (i=0; i<n; i++)
    for (j=0; j<panjang; j++)
    {
        strtemp[posisi] = st[j];
        posisi++;
    }

    strtemp[posisi] = 0;

    return (char *)strtemp;
}

int main (){
    cout << ulang("Channa ", 11) << endl;
    cout << ulang("MIT ", 11) << endl;
    cout << ulang("Bismillah Pasti Bisa  ", 11) << endl;

    return 0;
}