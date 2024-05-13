#include <stdio.h>

int main (){
    char string [80];
    int indeks;

    printf ("Masukan Suatu String = ");
    gets (string);

    indeks = 0;
    while (string[indeks] !='\0');
    {
        indeks = indeks + 1;
    }
    printf ("Jumlah Karakter = %d\n",indeks);
    return 0;

}


// Contoh Fungsi gets ()
// #include <stdio.h>

// int main ()
// {
//     char nama [35];

//     printf ("Nama Anda = ");
//     gets (nama);

//     printf ("Hai, %s. Selamat Belajar Bro\n",nama);

//     return 0;

// }



