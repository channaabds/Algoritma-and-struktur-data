#include <stdio.h>

void hanoi(int n, char a, char b, char c)
{
    if (n == 1)
    printf("Pindahkan piring dari %c ke %c \n", a,c);
    else
    {
        hanoi(n-1, a, c, b);  // Memindah n-1 piring dari a ke b, dgn c sbg perantara
        hanoi(1, a, b, c);    // Memindah 1 piring tersisa dari a ke c
        hanoi(n-1, b, a, c);  // Memindah n-1 piring dari b ke c, dgn a sbg perantara
    }
}

int main (){
    int jum_piring;

    printf ("Jumlah Piring : ");
    scanf ("%d", &jum_piring);

    hanoi(jum_piring, 'A', 'B', 'C');

    return 0;
}