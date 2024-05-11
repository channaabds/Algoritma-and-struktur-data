#include <iostream>
using namespace std;

void tampilkan_larik(int data[], int n)
{
    int i;

    for (i = 0; i < n; i++)
    cout << data[i] << " ";
    cout << endl;
}

void bubble_sort(int data[], int n)
{
    int tahap, j, tmp;

    for (tahap = 1; tahap < n; tahap++)
    {
        for (j = 0; j < n - tahap; j++)
        if (data[j] > data[j+1])
        {
            /* Tukarkan */
            tmp = data[j];
            data[j] = data[j+1];
            data[j+1] = tmp;
        }

        cout << "Hasil Tahap " << tahap << ": ";
        tampilkan_larik(data, n);
    }
}

int main ()
{
    int JUM_DATA = 8;

    int i;
    int data[] = {11,22,33,14,15,62,27,81};

    bubble_sort(data, JUM_DATA);

    /* Hasil pengurutan */

    cout << "Hasil Pengurutan : \n";
    tampilkan_larik(data, JUM_DATA);

    return 0;
}