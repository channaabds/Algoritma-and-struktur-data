#include <stdio.h>
#include <string.h>

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
    char kalimat[] = "Hallo Kawan";
    char dicari = 'K';

    printf ("Posisi %c dalam string %s : %d\n", dicari, kalimat, poskar(kalimat, dicari));

    dicari = 'L';
    printf ("Posisi %c dalam string %s : %d\n", dicari, kalimat, poskar(kalimat, dicari));

    return 0;
}