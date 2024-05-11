#include <stdio.h>

int main (){
    int data[] = {1,2,3,4,5,6,7,8};

    int i;
    for (i=7; i >= 0; i--)
    printf ("%d ", data[i]);
    printf ("\n");

    return 0;
}