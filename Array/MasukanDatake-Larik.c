#include <stdio.h>

int main (){
    double data[10];
    int i, jumdata;
    char jawaban;

    jumdata = 0;
    for (i=0; i<10; i++)
    {
        printf ("Masukan Sebarang Bilangan = ");
        scanf ("%lf", &data[i]);

        printf ("Memasukan lagi (Y/T)?");
        scanf ("%c%c", &jawaban, &jawaban);

        if (jawaban == 'T'  ||  jawaban == 't')
        {
            jumdata = i+1;
            break;
        }
    }

    for (i = 0; i < jumdata; i++)
    printf ("%lf\n", data[i]);

    return 0;
}