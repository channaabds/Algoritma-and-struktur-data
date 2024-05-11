#include <iostream>
using namespace std;

void tampilkan_larik(int data[], int n)
{
    int i;

    for (i = 0; i < n; i++)
    cout << data[i] << " ";
    cout << endl;
}

void insertion_sort(int data[], int n)
{
    int i, k;
    int x;
    int ketemu;

    for (k = 1; k < n; k++)
    {
        x = data[k];
        i = k - 1;
        ketemu = 0;

        while ((i >= 0) && (!ketemu))
        {
            if (x < data[i])
            {
                data[i+1] = data[i];
                i = i - 1;
            }
            else
            ketemu = 1;

            data[i+1] = x;
        }
    }
}

int main ()
{
    const int JUM_DATA = 8;

    int i;
    int data[] = {12,14,23,1,10,56,9,2};

    insertion_sort(data, JUM_DATA);

    cout << "Hasil Pengurutan : \n";
    tampilkan_larik(data, JUM_DATA);

    return 0;
}