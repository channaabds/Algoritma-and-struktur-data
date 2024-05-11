#include <stdio.h>
#include <string.h>

int main (){
    char kata_inggris[32];
    int i;

    printf ("Kata (one,two,three) = ");
    scanf ("%s",kata_inggris);

    // Ubah Setiap Huruf Kapital ke Huruf Kecil
    for (i=0; i < strlen(kata_inggris); i++) kata_inggris[i] = tolower (kata_inggris[i]);
// Itu adalah baris kode C yang mengubah semua karakter dalam string "kata_inggris" menjadi huruf kecil menggunakan fungsi "tolower". 
// Fungsi "strlen" digunakan untuk menentukan panjang string, dan "for" loop digunakan untuk mengiterasi melalui setiap karakter dalam string dan mengubah karakter menjadi huruf kecil menggunakan fungsi "tolower".


    // Proses Pembandingan
    if (strcmp(kata_inggris,"one")==0)
    printf ("satu\n");
    else if (strcmp(kata_inggris,"two")==0)
    printf ("dua\n");
    else if (strcmp(kata_inggris,"three")==0)
    printf ("tiga\n");
    else
    printf ("Maaf, Saya Tidak Tahu\n");

return 0;
}