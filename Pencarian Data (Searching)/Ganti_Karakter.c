#include <stdio.h>
#include <string.h>

char *gantikar(char st[], char c1, char c2)
{
    int i;
    static char stTemp[80];

    /* Salin string */
    strcpy(stTemp, st);

    /* Proses Penggantian Karakter */
    for (i = 0; i < strlen(stTemp); i++)
    if (stTemp[i] == c1)
    stTemp[i] = c2;

    return (char *) stTemp;
}

int main (){
    char kalimat[] = "Bisa! maka kau bisa";

    printf ("%s\n", gantikar(kalimat, 'a', 'A'));

    return 0;
}