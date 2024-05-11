#include <iostream>
using namespace std;

void tampilkan_larik(int data[], int n)
{
    int i;

    for (i = 0; i < n; i++)
    cout << data[i] << " ";
    cout << endl;
}

void selection_sort(int data[], int n)
{
    int posMin, posAwal, j, tmp;

    for (posAwal = 0; posAwal < n-1; posAwal++)
    {
        posMin = posAwal;
        for (j = posAwal + 1; j < n; j++)
        if (data[posMin] > data[j])
        posMin = j;

        tmp = data[posAwal];
        data[posAwal] = data[posMin];
        data[posMin] = tmp;

        cout << "Hasil posAwal = " << posAwal << ": ";
        tampilkan_larik(data, n);
    }
}

int main ()
{
    const int JUM_DATA = 10;

    int i;
    int data[] = {12,23,14,56,78,90,15,18,24,100};

    selection_sort(data, JUM_DATA);

    cout << "Hasil Pengurutan: \n";
    tampilkan_larik(data, JUM_DATA);

    return 0;
}