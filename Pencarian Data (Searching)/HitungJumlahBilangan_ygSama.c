#include <stdio.h>

int hitung(int data[], int n, int k)
{
    int jumlah, i, ketemu;

    jumlah = 0;
    for (i = 1; i < n; i++)
    if (data[i] == k)
    jumlah++;

    return jumlah;
}

int main (){
    int data[8] = {1,7,8,5,8,8,1,9};
    int dicari = 8;

    printf ("Banyak Bilangan %d dalam larik data : %d\n", dicari, hitung(data, 8, dicari));

    return 0;
}