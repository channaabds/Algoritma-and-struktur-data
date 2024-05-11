#include <stdio.h>

int main (){
    char negara[5][2][15] = {{"Indonesia", "Jakarta"}, {"Filiphina", "Manila"}, {"Austria", "Wina"}, {"India", "New Delhi"}, {"Iran", "Taheran"}};

    int baris;

    for (baris = 0; baris < 5; baris++)
    if (negara[baris][0][0] == 'I')
    printf ("%s - %s \n", negara[baris][0], negara[baris][1]);

    return 0;
}